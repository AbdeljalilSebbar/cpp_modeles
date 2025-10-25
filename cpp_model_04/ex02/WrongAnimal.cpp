#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ): type("WrongAnimal"){
	std::cout << "WrongAnimal Default Constructor Called!" << std::endl;
}

WrongAnimal::WrongAnimal( std::string initType ): type(initType){
	std::cout << "WrongAnimal Constructor Called!" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& other ) {
	*this = other;
	std::cout << "Copy Assignment WrongAnimal Constructor Called!" << std::endl;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& other ) {
	if (this != &other) {
		this->type = other.type;
		std::cout << "Copy Assignment Operator= Called WrongAnimal" << std::endl;
	}
	return *this;
}

std::string	WrongAnimal::getType( void ) const{
	return this->type;
}

void	WrongAnimal::makeSound( void ) const{
	std::cout << "Wrong Sound Wrong Sound..." << std::endl;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "Destructor WrongAnimal Called!" << std::endl;
}
