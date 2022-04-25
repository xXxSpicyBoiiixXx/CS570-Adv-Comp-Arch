#include<Grappa.hpp>
#include<Collective.hpp>
#include<GrappaAllocator.hpp>
#include<iostream>

using namespace std;

int main(int argc, char *argv[])
{
	init(&argc, &argv);
	run[]({
	 cout << "Hello from the root core."<<flush;	
	});
	finalize();
}
