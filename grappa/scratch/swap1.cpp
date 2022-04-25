// swap: unbound spawn version
// note: relies on Grappa to put spawned threads on different cores
// this is not reliable.


// Allocate a global object on multiple cores
// Spawn at least two threads (control with srun)
// Each thread swaps the value of the same two 
// objects located on different cores

// Swap improved to use google logging
// Produces unbroken outputs
//  


#include <Grappa.hpp>
#include <iostream>
#include <GlobalAllocator.hpp>
#include <Delegate.hpp>
#include <Collective.hpp>

using namespace std;
using namespace Grappa;

#define ARRAYLEN 9
#define THREADS 10

int pos1, pos2; // array positions to swap
// These need to be available to every thread

void printloc()
{
	LOG(INFO) <<"[Core:"<<mycore()<<" locale: "<<mylocale()<<"] ";
}

int main(int argc, char *argv[])
{
	init(&argc, &argv);

	run([]{
		printloc();
		 LOG(INFO) << "Hi from root.\n"<< flush;		
		// it's enough now to spawn at least two child tasks
			
		CompletionEvent joiner; // so that root task waits for threads to complete

		// x is a global array of ARRAYLEN longs
		// it is linearly allocated to the global heap
		// since the block size of the global heap is 64bytes
		// ARRAYLEN>8  guarantees that at least two 
		// of the elements of globalx will be on different cores
		
 
		auto globalx = global_alloc<long>(9); 

//		printloc();
		LOG(INFO) << "Testing";
		LOG(INFO) << " global x is located on core " <<globalx.core()<<endl<<flush;

		// find the first element that is located on a different core than the 
		// first element of the array
		pos1=0;
		pos2=0;
		for (auto i=0; i<ARRAYLEN; i++){
			delegate::write( globalx+i , i);
			LOG(INFO) << "globalx["<<i<<"] is on core "<< (globalx+i).core() <<endl<<flush;
			if ((globalx+pos1).core()==(globalx+pos2).core())
				{
					pos2=i;
				}	
		}	
		printloc();
		LOG(INFO) << "Elenent "<< pos1 <<" and element " <<pos2 <<" are on different cores ("<< (globalx+pos1).core() <<" and "<<(globalx+pos2).core()<<")"<<endl<<flush;
	
		// spawn a thread on each core
		// the thread belongs to the core that spawns it
		// This should create at least two threads on two different cores
		// Control the number of cores and locales through slurm command line args
//		printloc();
		LOG(INFO) << "Before spawning: " <<endl<< flush;
		LOG(INFO)<< "element "<< pos1 << " is now " << delegate::read(globalx+pos1)  << " and element " << pos2 << " is now " << delegate::read(globalx+pos2)<<endl<<flush;
		int64_t tid=0;
		on_all_cores([]{
		for (auto i=0; i<THREADS; i++){
		spawn<unbound>(&joiner, [globalx]{  // spawning unbound here so that thread isn't tied to parent core
//			printloc();
			LOG(INFO)<< "Spawned thread on core " << mycore() << endl << flush;
			long pos1val= delegate::read(globalx+pos1);
			long pos2val= delegate::read(globalx+pos2);
		LOG(INFO)<< mycore() << " " << mylocale() << ", before swap: element "<< pos1 << " is now " << pos1val << " and element " << pos2 << " is now "  << pos2val <<endl<<flush;
			delegate::write( globalx+pos1, pos2val);
			delegate::write( globalx+pos2, pos1val);
//			printloc();
		
			pos1val= delegate::read(globalx+pos1);
			pos2val= delegate::read(globalx+pos2);
		LOG(INFO) << mycore() << " " << mylocale() << ", after swap:  element "<< pos1 << " is now " << pos1val << " and element " << pos2 << " is now "  << pos2val <<endl<<flush;
		});
		});
		
		joiner.wait();

		printloc();
		LOG(INFO) << "all tasks completed. exiting." << endl << flush;
	});
//	finalize();
	return 0;
}
