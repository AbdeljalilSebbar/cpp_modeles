#include "Serialize.hpp"

Serialize::Serialize( void )
{
}

uintptr_t	Serialize::serialize( Data* ptr ) {
	std::cout << "Converts to the unsigned integer type uintptr_t." << std::endl;
	return reinterpret_cast<unsigned int>(ptr);
}

Data*	Serialize::deserialize( uintptr_t raw ) {
	std::cout << "Converts it to a pointer to Data" << std::endl;
	return reinterpret_cast<Data*>(raw);
}

Serialize::~Serialize( void )
{
}
