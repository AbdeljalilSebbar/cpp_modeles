#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
private:
	Brain* dogBrain;
public:
	Dog( void );
	Dog( std::string initType );
	Dog( const Dog& other );

	Dog& operator=( const Dog& other );

	std::string getType( void ) const;
	void	makeSound( void ) const;

	void	callBrain( int index, std::string initBrain );
	void	getIdeasBrain( void );

	~Dog( void );
};

#endif