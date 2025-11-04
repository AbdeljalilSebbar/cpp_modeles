#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
    Intern( void );
    Intern( const Intern& other );

    AForm* makeForm( std::string formName, std::string target );

    Intern& operator=( const Intern& other );
    ~Intern( void );
};

#endif