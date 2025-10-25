#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal( void );
	WrongAnimal( std::string initType );
	WrongAnimal( const WrongAnimal& other );

	WrongAnimal& operator=( const WrongAnimal& other );

	std::string	getType( void ) const;
	void	makeSound( void ) const;

	~WrongAnimal();
};


#endif