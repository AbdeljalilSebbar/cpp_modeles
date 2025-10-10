/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_func.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:03:19 by abdsebba          #+#    #+#             */
/*   Updated: 2025/09/16 17:08:04 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

void handle_character_lenght(std::string str, int flag)
{
	if (str.length() > 10)
	{
		std::cout << GREEN;
		std::cout << str.substr(0, 9) << ".";
		std::cout << RESET;
	}
	else
	{
		std::cout << GREEN;
		std::cout << std::setw(10) << str;
		std::cout << RESET;
	}

	if (flag == 0)
		std::cout << YELLOW << "|" << RESET;
	else
		std::cout << "\n";
}

int check_alpha(std::string name)
{
	int i = 0;

	if (name == "")
		return 1;
	while (name[i])
	{
		if (!std::isprint(name[i]))
			return 1;
		i++;
	}
	return 0;
}

int check_digit(std::string name)
{
	int i = 0;

	if (name == "")
		return 1;
	if (name[0] == '+')
		i++;
	while (name[i])
	{
		if (!std::isdigit(name[i]))
			return 1;
		i++;
	}
	return 0;
}

void PhoneBook::shows_all_contact(Contact *contacts)
{
	std::cout << YELLOW << "-------------------------------------------" << RESET << std::endl;
	std::cout << YELLOW << "   Index  |First Name| Last Name| Nickname " << RESET << std::endl;
	std::cout << YELLOW << "-------------------------------------------" << RESET << std::endl;

	for (int i = 0; i < 8; i++)
	{
		if (!contacts[i].getFirstName().empty())
		{
			std::cout << GREEN << "         " << i << RESET << YELLOW << "|" << RESET;
			handle_character_lenght(contacts[i].getFirstName(), 0);
			handle_character_lenght(contacts[i].getLastName(), 0);
			handle_character_lenght(contacts[i].getNickName(), 1);
		}
	}
}
