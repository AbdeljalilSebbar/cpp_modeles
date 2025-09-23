/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 18:01:09 by abdsebba          #+#    #+#             */
/*   Updated: 2025/09/20 18:01:10 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
private:
	std::string name;
public:
	void announce( void );
	Zombie( std::string initname);
	~Zombie( void );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif