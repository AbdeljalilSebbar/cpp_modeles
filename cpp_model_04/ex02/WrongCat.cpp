/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:28:10 by abdsebba          #+#    #+#             */
/*   Updated: 2025/10/28 14:28:11 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ): WrongAnimal("WrongAnimal"){
	std::cout << "Default Constructor WrongCat Called!!" << std::endl;
}

WrongCat::WrongCat( std::string iniType ): WrongAnimal(iniType){
	std::cout << "Constructor WrongCat Called!!" << std::endl;
}

WrongCat::WrongCat( const WrongCat& other ): WrongAnimal(other){
	*this = other;
	std::cout << "Copy Assignment Constructor Called!!" << std::endl;
}

WrongCat& WrongCat::operator=( const WrongCat& other ) {
	if (this != &other) {
		WrongAnimal::operator=(other);
		std::cout << "Copy Assignment Operator WrongCat Called!" << std::endl;
	}
	return *this;
}

std::string WrongCat::getType( void ) const{
	return this->type;
}

void    WrongCat::makeSound( void ) const{
	std::cout << "Sound from WrongCat" << std::endl;
}

WrongCat::~WrongCat( void ) {
	std::cout << "Destructor WrongCat Called!!" << std::endl;
}
