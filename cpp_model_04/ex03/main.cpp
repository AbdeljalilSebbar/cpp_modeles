/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:51:29 by abdsebba          #+#    #+#             */
/*   Updated: 2025/10/29 14:51:30 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
	IMateriaSource *src = new MateriaSource();
	std::cout << "-------------------------  -------------------------" << std::endl;
	src->learnMateria(new Ice());
	std::cout << "-------------------------  -------------------------" << std::endl;
	src->learnMateria(new Cure());
	std::cout << "-------------------------  -------------------------" << std::endl;
	ICharacter *me = new Character("me");
	std::cout << "-------------------------  -------------------------" << std::endl;
	AMateria *tmp;
	std::cout << "-------------------------  -------------------------" << std::endl;
	tmp = src->createMateria("ice");
	std::cout << "-------------------------  -------------------------" << std::endl;
	me->equip(tmp);
	std::cout << "-------------------------  -------------------------" << std::endl;
	tmp = src->createMateria("cure");
	std::cout << "-------------------------  -------------------------" << std::endl;
	me->equip(tmp);
	std::cout << "-------------------------  -------------------------" << std::endl;
	ICharacter *bob = new Character("bob");
	std::cout << "--------------------------------------------------" << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << "--------------------------------------------------" << std::endl;
	std::cout << "------------------------- Destructors -------------------------" << std::endl;
	delete bob;
	delete me;
	delete src;
	return 0;
}