/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 21:51:52 by abdsebba          #+#    #+#             */
/*   Updated: 2025/11/13 21:51:53 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ):
	AForm("Default", 145, 137), target("Default")
{
	std::cout << "Default Constructor Of ShrubberyCreationForm Called!!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string initName ):
	AForm(initName, 145, 137), target(initName)
{
	std::cout << "Constructor Of ShrubberyCreationForm Called!!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& other ):
	AForm(other), target(other.target)
{
	std::cout << "Copy Assignment Constructor ShrubberyCreationForm Called!" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm& other ) {
	if (this != &other) {
		AForm::operator=(other);
		this->target = other.target;
		std::cout << "Copy Assignment Operator ShrubberyCreationForm Called!" << std::endl;
	}
	return *this;
}

void	drawASCII_Trees( int height, std::ofstream& newFile ) {
	for (int i = 0; i < height; i++) {
		for (int x = 0; x < height - i; x++) {
			newFile << " ";
		}
		for (int j = 0; j < 2 * i + 1; j++) {
			newFile << "*";
		}
		newFile << std::endl;
	}
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < height*2; j++) {
			if (j == height)
			{
				newFile << "|";
				break;
			}
			newFile << " ";
		}
		newFile << std::endl;
	}
}

void	ShrubberyCreationForm::execute( Bureaucrat const & executor ) const{
	if (!getSigne())
		throw FormNotSignedException();
	if (executor.getGrade() > this->getGradeExe())
		throw GradeTooLowException();
	std::ofstream newFile(this->target + "_shrubbery");
	if (newFile.is_open()) {
		drawASCII_Trees(10, newFile);
		newFile.close();
		std::cout << "✅ " << target << "_shrubbery has been created!" << std::endl;
	}else {
		std::cout << "Error: Unable to open file." << std::endl;
	}
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {
	std::cout << "Destructor Of ShrubberyCreationForm Called!" << std::endl;
}