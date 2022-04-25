#include <Grappa.hpp>
#include <iostream>
#include <cstdlib>

int main(int argc, char *argv[]) {
double start = Grappa::walltime();
Grappa::init(&argc, &argv);
Grappa::run([]{
	std::cout << "This is the root task.";
	std::cout << "(Core: "<<Grappa::mycore();
	std::cout << " locale: ";
	std::cout <<Grappa::mylocale() <<")\n" << std::flush;
});

if (const char*env_p  = std::getenv("HOSTNAME"))
	std::cout << "Hostname is: " << env_p << "(Core: " << Grappa::mycore() << " locale: " << Grappa::mylocale() <<")\n" << std::flush;

//Grappa::finalize();
double runtime = Grappa::walltime() - start;
LOG(INFO) << "Process on core "<< Grappa::mycore() << "(locale "<< Grappa::mylocale() << ") took " << runtime <<" seconds";
}
