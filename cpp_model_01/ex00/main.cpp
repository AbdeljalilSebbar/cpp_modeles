/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 18:00:50 by abdsebba          #+#    #+#             */
/*   Updated: 2025/09/20 18:00:51 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void ) {
    randomChump("abde");
    Zombie *zom = newZombie("foo");
    if (!zom)
        return -1;
    zom->announce();
    delete zom;

    return 0;
}