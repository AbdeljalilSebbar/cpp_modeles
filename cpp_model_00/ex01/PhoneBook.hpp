/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:03:31 by abdsebba          #+#    #+#             */
/*   Updated: 2025/09/15 10:34:56 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include "Contact.hpp"

#define RESET "\033[0m"
#define BLUE "\033[36m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"


class PhoneBook
{
	public:
    	Contact arr_of_contact[8];
		void shows_all_contact( Contact *contacts );
};

int handle_adding_contact(int *index, PhoneBook *phone_book);

#endif