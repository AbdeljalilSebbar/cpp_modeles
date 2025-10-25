#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
private:
	Brain* catBrain;
public:
	Cat( void );
	Cat( std::string initType );
	Cat( const Cat& other );

	Cat& operator=( const Cat& other );

	std::string getType( void ) const;
	void	makeSound( void ) const;

	void	callBrain( int index, std::string initBrain );
	void	getIdeasBrain( void );

	~Cat( void );
};

#endif