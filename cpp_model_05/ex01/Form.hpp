/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 21:50:53 by abdsebba          #+#    #+#             */
/*   Updated: 2025/11/13 21:50:54 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
private:
	const std::string	name;
	bool				signe;
	const int			grade_sign;
	const int			grade_exe;

public:
	Form( void );
	Form(std::string initName, int gradeSign, int gradeExe);
	Form( const Form& other );

	class GradeTooHighException: public std::exception {
		const char* what() const throw();
	};

	class GradeTooLowException: public std::exception {
		const char* what() const throw();
	};

	std::string	getName( void ) const;
	bool	getSigne( void ) const;
	int		getGradeSign( void ) const;
	int		getGradeExe( void ) const;

	Form& operator=( const Form& other );

	void	beSigned( const Bureaucrat& m );

	~Form( void );
};

std::ostream& operator<<( std::ostream& os, const Form& other );

#endif