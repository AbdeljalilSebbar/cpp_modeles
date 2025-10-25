#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal{
public:
	Cat( void );
	Cat( std::string initType );
	Cat( const Cat& other );

	Cat& operator=( const Cat& other );

	std::string getType( void ) const;
	void	makeSound( void ) const;

	~Cat( void );
};

#endif