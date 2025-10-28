/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:24:20 by abdsebba          #+#    #+#             */
/*   Updated: 2025/10/28 14:27:53 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	// Animal a;

	Dog d;
	Cat c;

	std::cout << std::endl;
	d.makeSound();
	c.makeSound();

	std::cout << std::endl;
	Animal *animal = new Dog();

	std::cout << std::endl;
	animal->makeSound();

	std::cout << std::endl;
	delete animal;

	return 0;
}