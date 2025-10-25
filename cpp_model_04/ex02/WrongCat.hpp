#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
public:
	WrongCat( void );
	WrongCat( std::string iniType );
	WrongCat( const WrongCat& other );

	WrongCat& operator=( const WrongCat& other );

	std::string	getType( void ) const;
	void	makeSound( void ) const;

	~WrongCat( void );
};



#endif