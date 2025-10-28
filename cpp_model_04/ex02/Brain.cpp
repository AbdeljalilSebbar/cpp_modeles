/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:27:08 by abdsebba          #+#    #+#             */
/*   Updated: 2025/10/28 14:27:09 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "ideas";
	std::cout << "Default Brain Constructor Called!" << std::endl;
}

Brain::Brain( std::string initArr ) {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = initArr;
	std::cout << "Brain Constructor Called!" << std::endl;
}


Brain::Brain( const Brain& other ) {
	*this = other;
	std::cout << "Brain Copy Assignment Constructor Called!" << std::endl;
}

Brain& Brain::operator=( const Brain& other ) {
	if (this != & other) {
		for (int i = 0; i < 100; i++)
		{
			this->ideas[i] = other.ideas[i];
		}
		std::cout << "Brain Copy Assignment Operator Called!" << std::endl;
	}
	return *this;
}

void	Brain::getIdea( int index ) const{
	if (index < 0 || index > 100)
	{
		return ;
	}
	std::cout << this->ideas[index] << std::endl;
}

void	Brain::setIdeas( int index, std::string setIdea ) {
	if (index < 0 || index > 100)
	{
		std::cout << "Index Incorrecte!" << std::endl;
		return ;
	}
	this->ideas[index] = setIdea;
}

Brain::~Brain( void )
{
	std::cout << "Brain Destructor Called!" << std::endl;
}