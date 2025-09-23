/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 18:05:11 by abdsebba          #+#    #+#             */
/*   Updated: 2025/09/20 18:05:12 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug( void ) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout << "I really do!";
	std::cout << std::endl;
}

void Harl::info( void ) {
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!";
	std::cout << std::endl;
}

void Harl::warning( void ) {
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years, whereas you started working here just last month.";
	std::cout << std::endl;
}

void Harl::error( void ) {
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
}

void Harl::complain( std::string level ) {
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	void (Harl::*findedlevel[])(void) = 
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	for (i = 0; i < 4; i++)
	{
		if (level == levels[i])
			break ;
	}
	switch (i)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			(this->*findedlevel[0])();
			std::cout << std::endl;
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			(this->*findedlevel[1])();
			std::cout << std::endl;
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			(this->*findedlevel[2])();
			std::cout << std::endl;
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			(this->*findedlevel[3])();
			std::cout << std::endl;
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
	}
}
