// passvalues: pass different types of addresses to threads
// The types of memory objects are:
// 1. Declared outside of main(). Object inherited by every spawned process (SPMD), uninitialized.
// 2. Grappa Global declared inside main() but outside thread.
// 3. local inside main(), outside spawned threads
// 4. Symmetric declared outside spawned threads

#include <Grappa.hpp>
#include <iostream>
#include <GlobalAllocator.hpp>
#include <Delegate.hpp>
#include <Collective.hpp>

using namespace std;
using namespace Grappa;

#define THREADS 2

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
		LOG(INFO) << "Hi from the root task.";
		on_all_cores([]{
			spawn([]{ 
				LOG(INFO) << "Hi from spawned task on core " << mycore();
			});	
		});
	});
	return 0;
}
