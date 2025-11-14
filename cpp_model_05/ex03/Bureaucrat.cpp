/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 21:52:15 by abdsebba          #+#    #+#             */
/*   Updated: 2025/11/13 21:52:16 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ):
	name("Default"), grade(150)
{
	std::cout << "Default Constructor Of Bureaucrat Called!" << std::endl;
}

Bureaucrat::Bureaucrat( std::string initName, int initGrade ):
	name(initName), grade(initGrade)
{
	std::cout << "Constructor Of Bureaucrat Called!" << std::endl;
	if (initGrade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (initGrade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
}

Bureaucrat::Bureaucrat( const Bureaucrat& other ) {
	*this = other;
	std::cout << "Copy Assignment Constructor Called!" << std::endl;
}

std::string Bureaucrat::getName( void ) const{
	return this->name;
}

int Bureaucrat::getGrade( void ) const{
	return this->grade;
}

void Bureaucrat::incrementGrade( void ) {
	if (this->grade <= 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	this->grade--;
}

void Bureaucrat::decrementGrade( void ) {
	if (this->grade >= 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	this->grade++;
}

const char* Bureaucrat::GradeTooHighException::what( void ) const throw() {
	return "ERROR: The Grade Is Too High Max 1";
}

const char* Bureaucrat::GradeTooLowException::what( void ) const throw() {
	return "ERROR: The Grade Is Too Low Max 150";
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& other ) {
	if (this != &other) {
		this->grade = other.grade;
		std::cout << "Copy Assignment Operator Called!" << std::endl;
	}
	return *this;
}

std::ostream& operator<<( std::ostream& os, const Bureaucrat& other ) {
	os << other.getName() << ", bureaucrat grade " << other.getGrade();
	return os;
}

void    Bureaucrat::signForm( AForm& m ) {
	try
	{
		m.beSigned(*this);
		std::cout << this->getName() << " signed " << m.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->getName() << " couldn’t sign " << m.getName() << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const & form) const{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << this->getName()
		          << " couldn’t execute " << form.getName()
		          << " because " << e.what() << std::endl;
	}
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << "Destructor Of Bureaucrat Called!" << std::endl;
}