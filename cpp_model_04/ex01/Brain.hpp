#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
private:
	std::string ideas[100];
public:
	Brain( void );
	Brain( std::string initArr );
	Brain( const Brain& other );

	Brain& operator=( const Brain& other );

	void	getIdea( void ) const;
	void	setIdeas( int index, std::string setIdea );

	~Brain( void );
};

#endif