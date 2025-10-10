/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 18:02:00 by abdsebba          #+#    #+#             */
/*   Updated: 2025/09/23 22:28:39 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon *humanB;
public:
    HumanB( std::string initName );
    void attack( void );
    void setWeapon(Weapon& club);
    ~HumanB( void );
};

#endif