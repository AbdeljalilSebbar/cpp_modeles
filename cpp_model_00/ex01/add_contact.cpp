/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_contact.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:03:05 by abdsebba          #+#    #+#             */
/*   Updated: 2025/09/15 10:50:28 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int add_firstName(std::string name, int i, PhoneBook *phone_book)
{
	std::cout << "First Name: ";
	std::getline(std::cin, name);
	if (std::cin.eof())
		return 1;
	while (check_alpha(name))
	{
		if (check_alpha(name))
		{
			std::cout << RED << "ERROR: Invalid FirstName" << RESET << std::endl;
			std::cout << "First Name: ";
			std::getline(std::cin, name);
			if (std::cin.eof())
				return 1;
		}
	}
	(*phone_book).arr_of_contact[i].setFirstName(name);
	return 0;
}

int add_lastName(std::string name, int i, PhoneBook *phone_book)
{
	std::cout << "Last Name: ";
	std::getline(std::cin, name);
	if (std::cin.eof())
		return 1;
	while (check_alpha(name))
	{
		if (check_alpha(name))
		{
			std::cout << RED << "ERROR: Invalid LastName" << RESET << std::endl;
			std::cout << "Last Name: ";
		}
		std::getline(std::cin, name);
		if (std::cin.eof())
			return 1;
	}
	(*phone_book).arr_of_contact[i].setLastName(name);
	return 0;
}

int add_nickName(std::string name, int i, PhoneBook *phone_book)
{
	std::cout << "NickName: ";
	std::getline(std::cin, name);
	if (std::cin.eof())
		return 1;
	while (name == "" || check_alpha(name))
	{
		std::cout << RED << "Wrong NickName!!" << RESET << std::endl;
		std::cout << "NickName: ";
		std::getline(std::cin, name);
		if (std::cin.eof())
			return 1;
	}
	(*phone_book).arr_of_contact[i].setNickName(name);
	return 0;
}

int add_phoneNamber(std::string name, int i, PhoneBook *phone_book)
{
	std::cout << "Phone Number: ";
	std::getline(std::cin, name);
	if (std::cin.eof())
		return 1;
	if (check_digit(name))
	{
		while (check_digit(name))
		{
			std::cout << RED << "ERROR: Wrong Phone Number!" << RESET << std::endl;
			std::cout << "Phone Number: ";
			std::getline(std::cin, name);
			if (std::cin.eof())
				return 1;
		}
	}
	(*phone_book).arr_of_contact[i].setPhoneNumber(name);
	return 0;
}

int add_darkSecret(std::string name, int i, PhoneBook *phone_book)
{
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, name);
	if (std::cin.eof())
		return 1;
	while (name == "" || check_alpha(name))
	{
		std::cout << RED << "Wrong Darkest Secret!!" << RESET << std::endl;
		std::cout << "Darkest Secret: ";
		std::getline(std::cin, name);
		if (std::cin.eof())
			return 1;
	}
	(*phone_book).arr_of_contact[i].setDarkest(name);
	return 0;
}

int handle_adding_contact(int *index, PhoneBook *phone_book)
{
	std::string name;

	// ADD FIRST NAME:
	if (add_firstName(name, *index, phone_book))
		return 1;
	// ADD LAST NAME:
	if (add_lastName(name, *index, phone_book))
		return 1;
	// ADD NICK NAME:
	if (add_nickName(name, *index, phone_book))
		return 1;
	// ADD PHONE NUMBER:
	if (add_phoneNamber(name, *index, phone_book))
		return 1;
	// ADD DARKEST SECRET:
	if (add_darkSecret(name, *index, phone_book))
		return 1;
	(*index)++;
	return 0;
}
