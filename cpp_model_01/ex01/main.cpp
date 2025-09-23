/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 18:01:24 by abdsebba          #+#    #+#             */
/*   Updated: 2025/09/20 18:01:25 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void ) {
    int numberZombie = 5;
    std::string zombieName = "ABDE";
    
    Zombie *z1 = zombieHorde(numberZombie, zombieName);
    if (!z1)
        return -1;
    for (int i = 0; i < numberZombie; i++)
        z1[i].announce();
    delete[] z1;
    return 0;
}
