/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 21:51:37 by abdsebba          #+#    #+#             */
/*   Updated: 2025/11/13 21:51:38 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ):
	AForm("Default", 25, 5), target("Default")
{
	std::cout << "Default Constructor Of PresidentialPardonForm Called!!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( std::string initTarget ):
	AForm(initTarget, 25, 5), target(initTarget)
{
	std::cout << "Constructor Of PresidentialPardonForm Called!!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& other ):
	AForm(other), target(other.target)
{
	std::cout << "Copy Assignment Constructor PresidentialPardonForm Called!" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=( const PresidentialPardonForm& other ){
	if (this != &other) {
		AForm::operator=(other);
		this->target = other.target;
		std::cout << "Copy Assignment Operator PresidentialPardonForm Called!" << std::endl;
	}
	return *this;
}

void	PresidentialPardonForm::execute( Bureaucrat const & executor ) const{
	if (!this->getSigne())
		throw FormNotSignedException();
	if (executor.getGrade() > this->getGradeExe())
		throw GradeTooLowException();
	std::cout << this->target
	          << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {
	std::cout << "Destructor Of PresidentialPardonForm Called!" << std::endl;
}
