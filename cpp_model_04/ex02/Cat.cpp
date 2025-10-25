#include "Cat.hpp"

Cat::Cat( void ): Animal("Cat") {
	this->catBrain = new Brain();
	std::cout << "Default Constructor Cat Called!" << std::endl;
}

Cat::Cat( std::string initType): Animal(initType){
	this->catBrain = new Brain(initType);
	std::cout << "Constructor Cat of Type " << this->type << " Called!" << std::endl;
}

Cat::Cat( const Cat& other ): Animal(other) {
	*this = other;
	std::cout << "Copy Assignment Constructor of Cat Called!" << std::endl;
}

Cat& Cat::operator=( const Cat& other ) {
	if (this != &other) {
		Animal::operator=(other);
		this->catBrain->operator=(*other.catBrain);
		std::cout << "Copy Assignment Operator of Cat Called!" << std::endl;
	}
	return *this;
}

std::string	Cat::getType( void ) const{
	return this->type;
}

void	Cat::makeSound( void ) const{
	std::cout << "Meow meow meow..." << std::endl;
}

void	Cat::callBrain( int index, std::string initBrain ) {
	this->catBrain->setIdeas(index, initBrain);
}

void	Cat::getIdeasBrain( void ) {
	this->catBrain->getIdea();
}

Cat::~Cat( void ) {
	std::cout << "Destructor Of Cat Call Delete Brain!" << std::endl;
	delete catBrain;
	std::cout << "Destructor Of Cat Called!" << std::endl;
}
