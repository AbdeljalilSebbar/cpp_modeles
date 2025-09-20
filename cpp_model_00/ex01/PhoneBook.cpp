/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:03:25 by abdsebba          #+#    #+#             */
/*   Updated: 2025/09/19 15:47:36 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
	int i = 0;
	PhoneBook phone_book;
	std::string name;
	std::string index_contact;
	int index;
	int flag = 0;
	std::string command;
	while (1)
	{
		flag = 0;
		std::cout << "\t~[ADD SEARCH EXIT]~" << std::endl;
		std::getline(std::cin, command);
		if (std::cin.eof())
			return 1;
		if ((command != "ADD" && command != "SEARCH" && command != "EXIT") || command.empty())
		{
			std::cout << RED << "\tUnknown command!" << RESET << std::endl;
			continue ;
		}
		if (command == "EXIT")
		{
			std::cout << "\tExit The PhoneBook Program!" << std::endl;
			exit(EXIT_SUCCESS);
		}
		if (command == "ADD")
		{
			if (handle_adding_contact(&i, &phone_book))
				return 1;
		}
		if (command == "SEARCH")
		{
			if (!phone_book.arr_of_contact[0].getFirstName().empty())
			{
				phone_book.shows_all_contact(phone_book.arr_of_contact);
				std::cout << "Contact Index: ";
				std::getline(std::cin, index_contact);
				if (std::cin.eof())
					return 1;
				while (check_digit(index_contact) || check_alpha(index_contact) || index_contact.length() > 1)
				{
					std::cout << RED << "Invalid Index [0 - 7]!!" << RESET << std::endl;
					std::cout << "Contact Index: ";
					std::getline(std::cin, index_contact);
					if (std::cin.eof())
						return 1;
				}
				index = std::atoi(index_contact.c_str());
				for (int y = 0; y < 8; y++)
				{
					if (y == index && !phone_book.arr_of_contact[y].getFirstName().empty())
					{
						std::cout << BLUE << "✅Contact Information:" << RESET << std::endl;
						std::cout << BLUE << "---------------------" << RESET << std::endl;
						std::cout << YELLOW << "First name: " << RESET << phone_book.arr_of_contact[y].getFirstName() << std::endl;
						std::cout << YELLOW << "Last name: " << RESET << phone_book.arr_of_contact[y].getLastName() << std::endl;
						std::cout << YELLOW << "Nickname: " << RESET << phone_book.arr_of_contact[y].getNickName() << std::endl;
						std::cout << YELLOW << "Phone number: " << RESET << phone_book.arr_of_contact[y].getPhoneNumber() << std::endl;
						std::cout << YELLOW << "Darkest secret: " << RESET << phone_book.arr_of_contact[y].getDarkest() << std::endl;
						flag++;
						break ;
					}
				}
				if (!flag)
						std::cout << RED << "ERROR: The Searched Index Not Found!" << RESET << std::endl;
			}
			else
				std::cout << RED << "   NO USER HAVE BEEN ADD TO SEARCH!" << RESET << std::endl;
		}
		i = i % 8;
	}
}
