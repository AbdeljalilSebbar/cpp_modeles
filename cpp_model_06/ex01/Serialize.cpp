#include "Serialize.hpp"

Serializer::Serializer( void ) {
	std::cout << "Default Constructor Called!" << std::endl;
}

Serializer::Serializer( const Serializer& other ) {
	*this = other;
	std::cout << "Copy Assignment Constructor Called!" << std::endl;
}

uintptr_t	Serializer::serialize( Data* ptr ) {
	std::cout << "Converts to the unsigned integer type uintptr_t." << std::endl;
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*	Serializer::deserialize( uintptr_t raw ) {
	std::cout << "Converts it to a pointer to Data" << std::endl;
	return reinterpret_cast<Data*>(raw);
}

Serializer& Serializer::operator=( const Serializer& other ) {
	if (this != &other) {
		std::cout << "Copy Assignment Operator Called!" << std::endl;
	}
	return *this;
}

Serializer::~Serializer( void ) {
	std::cout << "Destructor Called!" << std::endl;
}
