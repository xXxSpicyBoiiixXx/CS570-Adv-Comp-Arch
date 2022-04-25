#include <iostream>
#include <Grappa.hpp>
#include <GlobalAllocator.hpp>
#include <Delegate.hpp>
#include <Collective.hpp>

using namespace Grappa;

int main(int argc, char *argv[])
{
	init(&argc,&argv);

	run([]{
	size_t N=50;
	GlobalAddress<long> array = global_alloc<long>(N);

	// write to an object on the global heap with a global address
	
	for (size_t i = 0; i<N ; i++)
	{
	 delegate::write( array+i,i );
	}
	for (size_t i=0; i<N ; i++)
	{
	long value = delegate::read( array+i );
	std::cout<< "[" <<i << "]= " << value <<"\n" <<std::flush;
	double v = delegate::call(array+i, [](long *a){ return tan(*a); });
	std::cout << ", tan = " << v << std::endl<<std::flush;
	}	
	});
}
