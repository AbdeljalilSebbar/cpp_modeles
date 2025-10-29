/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:51:47 by abdsebba          #+#    #+#             */
/*   Updated: 2025/10/29 14:51:48 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {
	for (int i = 0; i < 4; i++)
		sourceMate[i] = NULL;
	std::cout << "MateriaSource Default Constructor Called!" << std::endl;
}

MateriaSource::MateriaSource( const MateriaSource& other ) {
	*this = other;
	std::cout << "MateriaSource Copy Assignment Constructor Called!" << std::endl;
}

MateriaSource& MateriaSource::operator=( const MateriaSource& other ) {
	if (this != &other) {
		// Delete old sourceMate in this object
		for (int i = 0; i < 4; i++) {
			if (this->sourceMate[i])
				delete this->sourceMate[i];
			this->sourceMate[i] = NULL;
		}

		// Deep copy the sourceMate from the other object
		for (int i = 0; i < 4; i++) {
			if (other.sourceMate[i])
				this->sourceMate[i] = other.sourceMate[i]->clone();
			else
				this->sourceMate[i] = NULL;
		}

		std::cout << "MateriaSource Copy Assignment Operator called!" << std::endl;
	}
	return *this;
}

void	MateriaSource::learnMateria( AMateria* ameta) {
	if (!ameta) {
		std::cout << "Can't Pass NULL AMateria To LearnMateria!" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (!this->sourceMate[i])
		{
			this->sourceMate[i] = ameta;
			std::cout << "The AMateria: " << ameta->getType() << " At Index: " << i << std::endl;
			return ;
		}		
	}
	std::cout << "MateriaSource inventory is full! Cannot learn more materias!" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (this->sourceMate[i] && this->sourceMate[i]->getType() == type) {
			std::cout << "MateriaSource creates " << type << std::endl;
			return this->sourceMate[i]->clone();
		}
	}
	std::cout << "MateriaSource cannot create material of type " << type << std::endl;
	return NULL;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (sourceMate[i]) {
			delete sourceMate[i];
			sourceMate[i] = NULL;
		}
	}
	std::cout << "MateriaSource Destructor called!" << std::endl;
}
