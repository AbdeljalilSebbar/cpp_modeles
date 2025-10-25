#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal{
public:
	Dog( void );
	Dog( std::string initType );
	Dog( const Dog& other );

	Dog& operator=( const Dog& other );

	std::string getType( void ) const;
	void	makeSound( void ) const;

	~Dog( void );
};

#endif