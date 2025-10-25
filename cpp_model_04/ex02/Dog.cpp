#include "Dog.hpp"

Dog::Dog( void ): Animal("Dog") {
	this->dogBrain = new Brain();
	std::cout << "Default Constructor Dog Called!" << std::endl;
}

Dog::Dog( std::string initType): Animal(initType){
	this->dogBrain = new Brain(initType);
	std::cout << "Constructor Dog of Type " << this->type << " Called!" << std::endl;
}

Dog::Dog( const Dog& other ): Animal(other) {
	*this = other;
	std::cout << "Copy Assignment Constructor of Dog Called!" << std::endl;
}

Dog& Dog::operator=( const Dog& other ) {
	if (this != &other) {
		Animal::operator=(other);
		this->dogBrain->operator=(*other.dogBrain);
		std::cout << "Copy Assignment Operator= of Dog Called!" << std::endl;
	}
	return *this;
}

std::string	Dog::getType( void ) const{
	return this->type;
}

void	Dog::makeSound( void ) const{
	std::cout << "Woof woof woof..." << std::endl;
}

void	Dog::callBrain( int index, std::string initBrain ) {
	this->dogBrain->setIdeas(index, initBrain);
}

void	Dog::getIdeasBrain( void ) {
	this->dogBrain->getIdea();
}

Dog::~Dog( void ) {
	std::cout << "Destructor Of Dog Call Delete Brain!" << std::endl;
	delete dogBrain;
	std::cout << "Destructor Of Dog Called!" << std::endl;
}
