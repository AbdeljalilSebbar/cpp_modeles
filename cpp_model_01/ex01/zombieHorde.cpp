/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 18:01:39 by abdsebba          #+#    #+#             */
/*   Updated: 2025/09/23 22:27:44 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N <= 0)
	{
		std::cout << "ERROR: 0 Zombie not allowed" << std::endl;
		return NULL;
	}
	Zombie *z1 = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		z1[i] = Zombie(name);
	}
	return z1;
}
