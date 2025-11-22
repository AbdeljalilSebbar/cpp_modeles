#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <iostream>
#include <string>
#include <cstdint>
#include "Data.hpp"

class	Serializer
{
public:
	Serializer( void );
	Serializer( const Serializer& other );
	Serializer& operator=( const Serializer& other );

	static	uintptr_t serialize( Data* ptr );
	static	Data* deserialize( uintptr_t raw );

	~Serializer( void );
};


#endif