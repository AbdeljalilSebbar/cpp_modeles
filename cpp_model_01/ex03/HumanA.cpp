/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 18:01:51 by abdsebba          #+#    #+#             */
/*   Updated: 2025/09/23 22:30:23 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string initName, Weapon &initWeapon): name(initName), humanA(initWeapon){};

void HumanA::attack( void ) {
    std::cout << name;
    std::cout << " attacks with their ";
    std::cout << humanA.getType();
    std::cout << std::endl;
}

HumanA::~HumanA()
{
}