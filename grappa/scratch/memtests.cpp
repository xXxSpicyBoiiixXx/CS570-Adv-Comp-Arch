#include <Grappa.hpp>
#include <GlobalAllocator.hpp>
#include <iostream>

using namespace std;
using namespace Grappa;

// Declare a numbered buffer struct 
// This will be made symmetric
struct Data {
 size_t N;
 long *buffer;

 void init(size_t N) {
	this->N=N;
	this->buffer= new long[32];
 }
} GRAPPA_BLOCK_ALIGNED;



int main(int argc, char *argv[])
{
	init(&argc, &argv); // start subsystems, print out diagnostics
	run([]{ // start root task
		cout << "Hello from the root task!\n"<< flush;	
		// allocating a copy of Data on every core
		// d is a symmetric address
		// put it on that core's slice of the global heap
		GlobalAddress<Data> d = symmetric_global_alloc< Data >();
		cout << "On the root node, d points to address "<< &d <<"\n" << flush;
		// This object can now be accessed on every core
		on_all_cores([d]{
			d->init(1024);
		});

		on_all_cores([d]{
		d->buffer[0]=mycore();
		});

		// declare an object on the global heap
		// print out the cores over which it is distributed
		auto array = global_alloc<long>(50);
		for (auto i=0; i<50; i++){
		cout << "[element " << i << " is on core " << (array+i).core() << "] " << "\n" << flush;
		}
		cout << " distributed in block-cyclic round robin fashion with block size " << block_size<< " bytes \n";
		global_free(array);

		on_all_cores([d]{ // spawn tasks on each core
		 cout << "Hello from core " << mycore();
		 cout << " on locale " <<mylocale() <<  "\n" << flush;
		cout << "I, core "<<mycore()<<" can see that d->buffer[0] is " << d->buffer[0] << "\n"<<flush;	
		cout << "On node" << mylocale() << ", d points to address "<< &d <<"\n" << flush;
		// declare and initialize a local varlaibe
		// this is allocated to the program stack
		// private to the core that runs this task
		long count=0;
		// assign a 2d address to this object
		// this address is usable by any task on any core
		GlobalAddress<long> g_count = make_global( &count );
		// pairs local memory address with core number
		cout << "global 2d address referring to location: " << g_count.pointer();
		cout <<" on core " << g_count.core() << "\n" << flush;			
		});
		cout << "Exiting root task.\n"<<flush;	
	});
//	finalize(); // commented out because it is noisy
}
		

