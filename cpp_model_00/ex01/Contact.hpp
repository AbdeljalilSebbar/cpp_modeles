#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include  <cctype>
#include <iomanip>

class Contact
{
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string darkest;
	std::string phone_number;

	public:
		void setFirstName(std::string name);
		void setLastName(std::string name);
		void setNickName(std::string name);
		void setDarkest(std::string name);
		void setPhoneNumber(std::string number);
		std::string getFirstName();
		std::string getLastName();
		std::string getNickName();
		std::string getPhoneNumber();
		std::string getDarkest();
};

void handle_character_lenght(std::string str, int flag);
int check_alpha(std::string name);
int check_digit(std::string name);

#endif
