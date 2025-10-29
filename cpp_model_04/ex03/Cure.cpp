/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:51:08 by abdsebba          #+#    #+#             */
/*   Updated: 2025/10/29 14:51:09 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ): AMateria("cure"){
	std::cout << "Cure Default Constructor Called!!" << std::endl;
}

Cure::Cure( const Cure& other ): AMateria(other){
	*this = other;
	std::cout << "Copy Assignment Constructor Cure Called!" << std::endl;
}

Cure::Cure( std::string type ): AMateria(type){
	std::cout << "Cure Constructor Called!!" << std::endl;
}

Cure& Cure::operator=( const Cure& other ) {
	if (this != &other) {
		AMateria::operator=(other);
		std::cout << "Cure type:`" << this->type << "` Copy assignment Operator called!" << std::endl;
	}
	return *this;
}

std::string	Cure::getType( void ) const{
	return this->type;
}

AMateria* Cure::clone( void ) const{
	std::cout << "Clone of Cure Called!" << std::endl;
	return new Cure(*this);
}

void	Cure::use( ICharacter &target ) {
	std::cout << "* heals " << target.getName() << " ’s wounds *" << std::endl;
}

Cure::~Cure( void ) {
	std::cout << "Destructor of Cure Called!!" << std::endl;
}
