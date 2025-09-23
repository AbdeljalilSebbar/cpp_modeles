/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 18:02:09 by abdsebba          #+#    #+#             */
/*   Updated: 2025/09/20 18:02:10 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string initType )
{
    type = initType;
}

Weapon::~Weapon()
{
}

const std::string& Weapon::getType( void ) {
    return type;
}

void Weapon::setType( std::string setType ) {
    type = setType;
}