#include "Dog.hpp"

Dog::Dog( void ): Animal("Dog") {
	std::cout << "Default Constructor Dog Called!" << std::endl;
}

Dog::Dog( std::string initType): Animal(initType){
	std::cout << "Constructor Dog of Type " << this->type << " Called!" << std::endl;
}

Dog::Dog( const Dog& other ): Animal(other) {
	*this = other;
	std::cout << "Copy Assignment Constructor of Dog Called!" << std::endl;
}

Dog& Dog::operator=( const Dog& other ) {
	if (this != &other) {
		Animal::operator=(other);
		std::cout << "Copy Assignment Operator of Dog Called!" << std::endl;
	}
	return *this;
}

std::string	Dog::getType( void ) const{
	return this->type;
}

void	Dog::makeSound( void ) const{
	std::cout << "Woof woof woof..." << std::endl;
}

Dog::~Dog( void ) {
	std::cout << "Destructor Of Dog Called!" << std::endl;
}
