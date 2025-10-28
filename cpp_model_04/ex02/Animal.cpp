/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:26:53 by abdsebba          #+#    #+#             */
/*   Updated: 2025/10/28 14:26:54 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ): type("ANIMAL"){
	std::cout << "The Animal Default Constructor Called!!" << std::endl;
}

Animal::Animal( std::string initType ): type(initType){
	std::cout << "The Animal Constructor Called!!" << std::endl;
}

Animal::Animal( const Animal& other ) {
	*this = other;
	std::cout << "Copy Assignment Constructor Called" << std::endl;
}

Animal& Animal::operator=( const Animal& other ) {
	if (this != &other) {
		this->type = other.type;
		std::cout << "Copy Assignment Operator= Called Animal" << std::endl;
	}
	return *this;
}

std::string Animal::getType( void ) const{
	return this->type;
}

void	Animal::makeSound( void ) const{
	std::cout << "Animal Base Does Not Make Sound!" << std::endl;
}


Animal::~Animal( void ) {
	std::cout << "Destructor Animal Called!" << std::endl;
}
