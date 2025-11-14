/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 21:52:21 by abdsebba          #+#    #+#             */
/*   Updated: 2025/11/13 21:52:22 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

	AForm*	ShrubberyForm( std::string& target);
	AForm*	RobotomyForm( std::string& target );
	AForm*	PresidentialForm( std::string& target );

	Intern& operator=( const Intern& other );
	~Intern( void );
};

#endif