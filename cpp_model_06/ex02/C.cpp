#include "C.hpp"

C::C( void ): Base() {
	std::cout << "C Constructor Called!" << std::endl;
}

C::~C( void ) {
	std::cout << "C Destructor Called!" << std::endl;
}
