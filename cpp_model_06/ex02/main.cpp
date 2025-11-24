/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 16:55:37 by abdsebba          #+#    #+#             */
/*   Updated: 2025/11/23 22:07:24 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate( void ) {
	std::srand(std::time(NULL));

	int options[3] = {1, 2, 3};
	int choice = options[std::rand() % 3];
	Base* base = NULL;
	try
	{
		if (choice == 1)
			base = new A();
		else if (choice == 2)
			base = new B();
		else if (choice == 3)
			base = new C();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return base;
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Uknowing type!?" << std::endl;
}

void identify(Base& p) {
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int	main(void)
{
	Base* p;
	Base* p1;

	p = generate();
	p1 = generate();

	std::cout << "The actual type of the object pointed to by p: 'A', 'B', or 'C': ";
	identify(p);
	std::cout << "The actual type of the object pointed to by p1: 'A', 'B', or 'C': ";
	identify(p1);
	std::cout << std::endl;

	std::cout << "he actual type of the object referenced by p: 'A', 'B', or 'C':" << std::endl;
	identify(*p);
	std::cout << "he actual type of the object referenced by p1: 'A', 'B', or 'C':" << std::endl;
	identify(*p1);
	std::cout << std::endl;

	delete p;
	delete p1;
	return (0);
}
