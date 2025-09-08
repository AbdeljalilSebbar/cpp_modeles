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
	int last_add = 0;
	while (1)
	{
		flag = 0;
		std::string command;
		std::cout << "\t~[ADD SEARCH EXIT]~" << std::endl;
		std::getline(std::cin, command);
		if (std::cin.eof())
			return 1;
		if (command == "EXIT")
			exit(EXIT_SUCCESS);
		if (command != "ADD" && command != "SEARCH" && command != "EXIT")
		{
			std::cout << "\t~[ADD SEARCH EXIT]~" << std::endl;
			std::getline(std::cin, command);
			if (std::cin.eof())
				return 1;
			continue ;
		}
		if (command == "ADD")
		{
			// ADD FIRST NAME:
			std::cout << "First Name: ";
			std::getline(std::cin, name);
			if (std::cin.eof())
				return 1;
			while (check_alpha(name))
			{
				if (check_alpha(name))
				{
					std::cout << "ERROR: Invalid FirstName Or Used FirstName!\n";
					std::cout << "First Name: ";
					std::getline(std::cin, name);
					if (std::cin.eof())
						return 1;
				}
			}
			phone_book.arr_of_contact[i].setFirstName(name);
			// ADD LAST NAME:
			std::cout << "Last Name: ";
			std::getline(std::cin, name);
			if (std::cin.eof())
				return 1;
			while (check_alpha(name))
			{
				if (check_alpha(name))
				{
					std::cout << "ERROR: Invalid LastName Or Used LastName!\n";
					std::cout << "Last Name: ";
				}
				std::getline(std::cin, name);
				if (std::cin.eof())
					return 1;
			}
			phone_book.arr_of_contact[i].setLastName(name);
			// ADD NICK NAME:
			std::cout << "NickName: ";
			std::getline(std::cin, name);
			if (std::cin.eof())
				return 1;
			while (name == "")
			{
				std::cout << "NickName: ";
				std::getline(std::cin, name);
				if (std::cin.eof())
					return 1;
			}
			phone_book.arr_of_contact[i].setNickName(name);
			// ADD PHONE NUMBER:
			std::cout << "Phone Number: ";
			std::getline(std::cin, name);
			if (std::cin.eof())
				return 1;
			if (check_digit(name))
			{
				while (check_digit(name))
				{
					std::cout << "ERROR: Wrong Phone Number!\n";
					std::cout << "Phone Number: ";
					std::getline(std::cin, name);
					if (std::cin.eof())
						return 1;
				}
			}
			phone_book.arr_of_contact[i].setPhoneNumber(name);
			// ADD DARKEST SECRET:
			std::cout << "Darkest Secret: ";
			std::getline(std::cin, name);
			if (std::cin.eof())
				return 1;
			while (name == "")
			{
				std::cout << "Darkest Secret: ";
				std::getline(std::cin, name);
				if (std::cin.eof())
					return 1;
			}
			phone_book.arr_of_contact[i].setDarkest(name);
			i++;
		}
		if (command == "SEARCH")
		{
			phone_book.shows_all_contact(phone_book.arr_of_contact);
			std::cout << "Contact Index: ";
			std::getline(std::cin, index_contact);
			if (std::cin.eof())
				return 1;
			index = std::atoi(index_contact.c_str());
			for (int y = 0; y < 8; y++)
			{
				if (y == index && !phone_book.arr_of_contact[y].getFirstName().empty())
				{
					std::cout << "\033[36m✅Contact Information:\033[0m" << std::endl;
					std::cout << "\033[36m---------------------\033[0m" << std::endl;
					std::cout << "First name: " << phone_book.arr_of_contact[y].getFirstName() << std::endl;
					std::cout << "Last name: " << phone_book.arr_of_contact[y].getLastName() << std::endl;
					std::cout << "Nickname: " << phone_book.arr_of_contact[y].getNickName() << std::endl;
					std::cout << "Phone number: " << phone_book.arr_of_contact[y].getPhoneNumber() << std::endl;
					std::cout << "Darkest secret: " << phone_book.arr_of_contact[y].getDarkest() << std::endl;
					flag++;
					break ;
				}
			}
			if (!flag)
					std::cout << "ERROR: The Searched Index Not Found!" << std::endl;
		}
		if (i == 7)
		{
			i = last_add % 8;
			last_add++;
			if (last_add > 8)
				last_add = 0;
		}
	}
}
