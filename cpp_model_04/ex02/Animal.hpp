#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
protected:
	std::string type;
public:
	Animal( void );
	Animal( const Animal& other );
	Animal( std::string initType );

	Animal& operator=( const Animal& other );

	std::string	getType( void ) const;
	virtual void	makeSound( void ) const = 0;

	virtual ~Animal( void );
};

#endif