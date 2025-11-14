/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 21:52:56 by abdsebba          #+#    #+#             */
/*   Updated: 2025/11/13 21:52:57 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
private:
	std::string target;
public:
	RobotomyRequestForm( void );
	RobotomyRequestForm( std::string initTarget );
	RobotomyRequestForm( const RobotomyRequestForm& other );

	RobotomyRequestForm& operator=( const RobotomyRequestForm& other );
	
	void	execute( Bureaucrat const & executor ) const;

	~RobotomyRequestForm( void );
};


#endif