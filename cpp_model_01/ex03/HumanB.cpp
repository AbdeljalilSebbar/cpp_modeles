/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 18:01:57 by abdsebba          #+#    #+#             */
/*   Updated: 2025/09/23 22:30:46 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string initName ): name(initName), humanB(NULL){};

void HumanB::attack( void ) {
	if (humanB == NULL)
		return ;
	std::cout << name;
	std::cout << " attacks with their ";
	std::cout << humanB->getType();
	std::cout << std::endl;
}

void HumanB::setWeapon(Weapon& club) {
	humanB = &club;
}

HumanB::~HumanB( void ) {}
