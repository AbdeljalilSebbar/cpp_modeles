#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Default Brain Constructor Called!" << std::endl;
}

Brain::Brain( std::string initArr ) {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = initArr;
	std::cout << "Brain Constructor Called!" << std::endl;
}


Brain::Brain( const Brain& other ) {
	*this = other;
	std::cout << "Brain Copy Assignment Constructor Called!" << std::endl;
}

Brain& Brain::operator=( const Brain& other ) {
	if (this != & other) {
		for (int i = 0; i < 100; i++)
		{
			this->ideas[i] = other.ideas[i];
		}
		std::cout << "Brain Copy Assignment Operator Called!" << std::endl;
	}
	return *this;
}

void	Brain::getIdea( void ) const{
	for (int i = 0; i < 100; i++)
		std::cout << ideas[i] << std::endl;
}

void	Brain::setIdeas( int index, std::string setIdea ) {
	for (int i = index; i < 100; i++)
	{
		ideas[i] = setIdea;
	}
}

Brain::~Brain( void )
{
	std::cout << "Brain Destructor Called!" << std::endl;
}