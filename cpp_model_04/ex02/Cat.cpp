/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:27:28 by abdsebba          #+#    #+#             */
/*   Updated: 2025/10/28 14:27:29 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ): Animal("Cat") {
	this->catBrain = new Brain();
	std::cout << "Default Constructor Cat Called!" << std::endl;
}

Cat::Cat( std::string initType): Animal(initType){
	this->catBrain = new Brain(initType);
	std::cout << "Constructor Cat of Type " << this->type << " Called!" << std::endl;
}

Cat::Cat( const Cat& other ): Animal(other), catBrain(new Brain(*other.catBrain)) {
	*this = other;
	std::cout << "Copy Assignment Constructor of Cat Called!" << std::endl;
}

Cat& Cat::operator=( const Cat& other ) {
	if (this != &other) {
		Animal::operator=(other);
		delete catBrain;
		this->catBrain = new Brain(*other.catBrain);
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

void	Cat::getIdeasBrain( int index ) {
	this->catBrain->getIdea(index);
}

Cat::~Cat( void ) {
	std::cout << "Destructor Of Cat Call Delete Brain!" << std::endl;
	delete catBrain;
	std::cout << "Destructor Of Cat Called!" << std::endl;
}
