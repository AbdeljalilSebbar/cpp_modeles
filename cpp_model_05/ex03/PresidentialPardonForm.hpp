/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 21:52:48 by abdsebba          #+#    #+#             */
/*   Updated: 2025/11/13 21:52:49 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
private:
	std::string target;
public:
	PresidentialPardonForm( void );
	PresidentialPardonForm( std::string initTarget );
	PresidentialPardonForm( const PresidentialPardonForm& other );

	PresidentialPardonForm& operator=( const PresidentialPardonForm& other );

	void	execute( Bureaucrat const & executor ) const;

	~PresidentialPardonForm();
};


#endif
