/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 21:52:10 by abdsebba          #+#    #+#             */
/*   Updated: 2025/11/13 21:52:11 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	const std::string	name;
	bool				signe;
	const int			grade_sign;
	const int			grade_exe;

public:
	AForm( void );
	AForm(std::string initName, int gradeSign, int gradeExe);
	AForm( const AForm& other );

	class GradeTooHighException: public std::exception {
		const char* what() const throw();
	};

	class GradeTooLowException: public std::exception {
		const char* what() const throw();
	};

	class FormNotSignedException: public std::exception {
		const char* what() const throw();
	};

	std::string	getName( void ) const;
	bool	getSigne( void ) const;
	int		getGradeSign( void ) const;
	int		getGradeExe( void ) const;

	AForm& operator=( const AForm& other );

	void	beSigned( const Bureaucrat& m );

	virtual void	execute( Bureaucrat const & executor ) const = 0;

	virtual ~AForm( void );
};

std::ostream& operator<<( std::ostream& os, const AForm& other );

#endif