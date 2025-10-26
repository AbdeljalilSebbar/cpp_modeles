#include "Ice.hpp"

Ice::Ice( void ): AMateria(){
	std::cout << "Ice Default Constructor Called!!" << std::endl;
}

Ice::Ice( const Ice& other ): AMateria(other){
	*this = other;
	std::cout << "Copy Assignment Constructor Ice Called!" << std::endl;
}

Ice::Ice( std::string type ): AMateria(type){
	std::cout << "Ice Constructor Called!!" << std::endl;
}

Ice& Ice::operator=( const Ice& other ) {
	if (this != &other) {
		AMateria::operator=(other);
		std::cout << "Ice type:`" << this->type << "` Copy assignment Operator called!" << std::endl;
	}
	return *this;
}

std::string	Ice::getType( void ) const{
	return this->type;
}

AMateria* Ice::clone( void ) const{
	std::cout << "Clone of Ice Called!" << std::endl;
	return new Ice(*this);
}

void	Ice::use( ICharacter &target ) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice( void ) {
	std::cout << "Destructor of Ice Called!!" << std::endl;
}
