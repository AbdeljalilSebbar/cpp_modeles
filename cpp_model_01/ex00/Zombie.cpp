/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 18:01:06 by abdsebba          #+#    #+#             */
/*   Updated: 2025/09/20 18:01:07 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string initname ) {
    name = initname;
    std::cout << "constructor called!" << std::endl;
}

void    Zombie::announce( void ){
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie( void ) {
    std::cout << "destructor called for " << name << std::endl;
}
