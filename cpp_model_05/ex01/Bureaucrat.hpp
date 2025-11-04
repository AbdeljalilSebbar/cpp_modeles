#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"
class Form;

class Bureaucrat
{
private:
	const std::string name;
	int grade;
public:
	Bureaucrat( void );
	Bureaucrat( std::string initname, int initGrade );
	Bureaucrat( const Bureaucrat& other );

	class GradeTooLowException: public std::exception
	{
		const char* what() const throw();
	};
	class GradeTooHighException: public std::exception
	{
		const char* what() const throw();
	};

	std::string getName( void ) const;
	int getGrade( void ) const;

	void	incrementGrade( void );
	void	decrementGrade( void );

	Bureaucrat& operator=( const Bureaucrat& other );

	void	signForm( Form& m );

	~Bureaucrat( void );
};

std::ostream& operator<<( std::ostream& os, const Bureaucrat& other );

#endif