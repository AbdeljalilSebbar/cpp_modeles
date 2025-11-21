#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <iostream>
#include <string>
#include <cstdint>
#include "Data.hpp"
/*
uintptr_t
is an unsigned integer type that is guaranteed to be large enough to hold the value of a data pointer.
It is used when you need to perform integer operations on a pointer or store a pointer's value as an integer,
such as for tasks like hashing or manipulating a pointer's raw address.
This type is available in C and C++ and is defined in the <stdint.h> or <cstdint> header file
*/

class Serialize
{
private:
public:
	Serialize( void );
	Serialize( void );
	Serialize( void );

	static	uintptr_t serialize(Data* ptr);
	static	Data* deserialize(uintptr_t raw);

	~Serialize( void );
};


#endif