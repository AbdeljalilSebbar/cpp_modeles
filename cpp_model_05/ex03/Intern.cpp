/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 21:52:24 by abdsebba          #+#    #+#             */
/*   Updated: 2025/11/14 10:27:54 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void )
{
	std::cout << "Default Constructor of Intern Called!" << std::endl;
}

Intern::Intern( const Intern& other ) {
	*this = other;
	std::cout << "Copy Assignment Constructor Intern Called!!" << std::endl;
}

Intern& Intern::operator=( const Intern& other ) {
	if (this != &other) {
		std::cout << "Copy Assignment Operator Intern Called!!" << std::endl;
	}
	return *this;
}

AForm*	Intern::ShrubberyForm( std::string& target) {
	AForm* newForm = NULL;
	return (newForm = new ShrubberyCreationForm(target));
}

AForm*	Intern::RobotomyForm( std::string& target ) {
	AForm* newForm = NULL;
	return (newForm = new RobotomyRequestForm(target));
}

AForm*	Intern::PresidentialForm( std::string& target ) {
	AForm* newForm = NULL;
	return (newForm = new PresidentialPardonForm(target));
}

AForm* Intern::makeForm( std::string formName, std::string target ) {
	std::string forms[3] = {
		"Shrubbery Creation",
		"robotomy request",
		"Presidential Pardon",
	};
	AForm* newForm = NULL;
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		if (formName == forms[i])
			break ;
	}
	AForm* ( Intern::*myMembersFun[] )( std::string& ) = {
		&Intern::ShrubberyForm,
		&Intern::RobotomyForm,
		&Intern::PresidentialForm,
	};
	try
	{
		newForm = (this->*myMembersFun[i])(target);
		if (newForm == NULL)
			throw ("Bad Allocation!?");
		std::cout << "Intern creates " << newForm->getName() << std::endl;
		return (newForm);
	}
	catch(const char* error)
	{
		std::cerr << "EXCEPTION: " << error << '\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << "EXCEPTION: " << e.what() << '\n';
	}
	return (newForm);
}

Intern::~Intern( void )
{
	std::cout << "Destructor of Intern Called!" << std::endl;
}
