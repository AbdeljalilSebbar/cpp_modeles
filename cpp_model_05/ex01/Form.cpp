/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 21:50:49 by abdsebba          #+#    #+#             */
/*   Updated: 2025/11/13 21:50:50 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void ):
	name("Default"), signe(false), grade_sign(150), grade_exe(150)
{
	std::cout << "Default Constructor Of Form Called!" << std::endl;
}

Form::Form( std::string initName, int gradeSign, int gradeExe ):
	name(initName), signe(false), grade_sign(gradeSign), grade_exe(gradeExe)
{
	std::cout << "Constructor Of Form Called!" << std::endl;
	if (grade_exe < 1 || grade_sign < 1)
		throw Form::GradeTooHighException();
	else if (grade_exe > 150 || grade_sign > 150)
		throw Form::GradeTooLowException();
}

Form::Form( const Form& other ):
	name(other.getName()), grade_sign(other.getGradeSign()), grade_exe(other.getGradeExe())
{
	*this = other;
	std::cout << "Copy Assignment Constructor Of Form Called!" << std::endl;
}

std::string Form::getName( void ) const{
	return this->name;
}

bool Form::getSigne( void ) const{
	return this->signe;
}

int Form::getGradeSign( void ) const{
	return this->grade_sign;
}

int Form::getGradeExe( void ) const{
	return this->grade_exe;
}

void    Form::beSigned( const Bureaucrat& m ) {
	if (m.getGrade() > this->grade_sign)
		throw Form::GradeTooLowException();
	this->signe = true;
}

Form& Form::operator=( const Form& other ) {
	if (this != &other) {
		this->signe = other.signe;
		std::cout << "Copy Assignment Operator Of Form Called!" << std::endl;
	}
	return *this;
}

std::ostream& operator<<( std::ostream& os, const Form& other ) {
	os 
	<< " Form NAME: " << other.getName()
	<< "\n Form Grade Required To Sign: " << other.getGradeSign()
	<< "\n Form Grade Required To Execute: " << other.getGradeExe()
	<< "\n Form Status Of Signe: " << other.getSigne();
	return os;
}

const char* Form::GradeTooHighException::what( void ) const throw(){
	return "Grade Too High!!!";
}

const char* Form::GradeTooLowException::what( void ) const throw(){
	return "Grade Too Low!!!";
}

Form::~Form( void ) {
	std::cout << "Destructor Of Form Called!" << std::endl;
}

