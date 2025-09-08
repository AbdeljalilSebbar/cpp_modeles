#include "Contact.hpp"
#include "PhoneBook.hpp"

void handle_character_lenght(std::string str, int flag)
{
    if (str.length() > 10)
    {
		std::cout << "\033[32m";
        std::cout << str.substr(0, 9) << ".";
		std::cout << "\033[0m";
    }
    else
    {
		std::cout << "\033[32m";
        std::cout << std::setw(10) << str;
		std::cout << "\033[0m";
    }

    if (flag == 0)
        std::cout << "\033[33m|\033[0m";
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
		if (!std::isalpha(name[i]))
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
    std::cout << "\033[33m--------------------------------------\033[0m" << std::endl;
    std::cout << "\033[33mIndex|First Name| Last Name| Nickname \033[0m" << std::endl;
    std::cout << "\033[33m--------------------------------------\033[0m" << std::endl;

    for (int i = 0; i < 8; i++)
    {
        if (!contacts[i].getFirstName().empty())
        {
            std::cout << "\033[32m    " << i << "\033[33m" << "\033[33m" << "|" << "\033[33m";
			handle_character_lenght(contacts[i].getFirstName(), 0);
			handle_character_lenght(contacts[i].getLastName(), 0);
			handle_character_lenght(contacts[i].getNickName(), 1);
        }
    }
}
