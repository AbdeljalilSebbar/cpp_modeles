/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:50:55 by abdsebba          #+#    #+#             */
/*   Updated: 2025/10/29 14:50:56 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ) : type("DefaultAMateria") {
	std::cout << "AMateria Default Constructor called!" << std::endl;
}

AMateria::AMateria( std::string const &initType ) : type(initType) {
	std::cout << "AMateria type:`" << type << "` Constructor called!" << std::endl;
}

AMateria::AMateria( AMateria const &other ) : type(other.type) {
	std::cout << "AMateria type:`" << type << "` Copy Constructor called!" << std::endl;
}

AMateria &AMateria::operator=(AMateria const &other) {
	if (this != &other) {
		this->type = other.type;
		std::cout << "AMateria type:`" << this->type 
				  << "` Copy Assignment Operator called!" << std::endl;
	}
	return (*this);
}

std::string const &AMateria::getType() const {
	return this->type;
}

void	AMateria::use( ICharacter &target ) {
	std::cout << "* uses materia on " << target.getName() << " *" << std::endl;
}

AMateria::~AMateria() {
	std::cout << "AMateria Destructor called!" << std::endl;
}
