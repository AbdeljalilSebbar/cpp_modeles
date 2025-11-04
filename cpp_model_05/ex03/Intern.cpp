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
	switch (i)
	{
	case 0:
		newForm = new ShrubberyCreationForm(target);
		std::cout << "Intern creates " << newForm->getName() << std::endl;
		break;
	case 1:
		newForm = new RobotomyRequestForm(target);
		std::cout << "Intern creates " << newForm->getName() << std::endl;
		break;
	case 2:
		newForm = new PresidentialPardonForm(target);
		std::cout << "Intern creates " << newForm->getName() << std::endl;
		break;
	default:
		std::cout << "Intern couldn’t find the form called: " << formName << std::endl;
		break;
	}
	return newForm;
}

Intern::~Intern( void )
{
	std::cout << "Destructor of Intern Called!" << std::endl;
}
