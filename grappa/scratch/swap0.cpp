// swap: unbound spawn version
// note: relies on Grappa to put spawned threads on different cores
// this is not reliable.
// TODO: include thread identifier numbers

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
#define THREADS 2

int pos1, pos2; // array positions to swap
// These need to be available to every thread

void printloc()
{
	LOG(INFO) <<"[Core:"<<mycore()<<" locale: "<<mylocale()<<"] ";
}

void printinfo()
{
	LOG(INFO) << "Cores in job: " << cores();
	LOG(INFO) << "Locales in job: " << locales();
}

int main(int argc, char *argv[])
{
	init(&argc, &argv);

	run([]{

		printinfo();
		printloc();
		 LOG(INFO) << "Hi from root.\n"<< flush;		
		// it's enough now to spawn at least two child tasks
			
		CompletionEvent joiner; // so that root task waits for threads to complete

		// x is a global array of ARRAYLEN longs
		// it is linearly allocated to the global heap
		// since the block size of the global heap is 64bytes
		// ARRAYLEN>8  guarantees that at least two 
		// of the elements of globalx will be on different memory locales 
		
 
		auto globalx = global_alloc<long>(9); 


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
		LOG(INFO) << "Element "<< pos1 <<" and element " <<pos2 <<" are on different cores ("<< (globalx+pos1).core() <<" and "<<(globalx+pos2).core()<<")"<<endl<<flush;
	
		// This will create THREADS threads 
		// Not guaranteed to be on different cores or locales
		// Control the number of cores and locales through slurm command line args
		// num locales = num cores when --ntasks-per-node=1

		for (auto i=0; i<THREADS; i++){
		spawn<unbound>(&joiner, [globalx]{  // spawning unbound here so that thread isnt tied to root core
// But in this version, no tasks are stolen and so they remain on root core even unbound
			LOG(INFO)<< "Spawned a thread on core " << mycore() << endl << flush;
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
		}
		
		joiner.wait();

		printloc();
		LOG(INFO) << "all tasks completed. exiting." << endl << flush;
	});
//	finalize();
	return 0;
}
