/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 18:01:54 by abdsebba          #+#    #+#             */
/*   Updated: 2025/09/23 22:28:17 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon &humanA;
public:
    HumanA( void );
    HumanA(std::string initName, Weapon &initWeapon);
    void attack( void );
    ~HumanA( void );
};


#endif