#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
	public:
    	Contact arr_of_contact[8];
		void shows_all_contact( Contact *contacts );
};

#endif