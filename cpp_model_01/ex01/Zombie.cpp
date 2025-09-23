/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 18:01:31 by abdsebba          #+#    #+#             */
/*   Updated: 2025/09/21 16:38:33 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) {
    std::cout << "Default constructor called" << std::endl;
}

Zombie::Zombie( std::string initname ) {
    std::cout << "Parameterized constructor called" << std::endl;
    name = initname;
}

Zombie::~Zombie( void ) {
    std::cout << "destructor called" << std::endl;
}

void Zombie::announce( void ) {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
