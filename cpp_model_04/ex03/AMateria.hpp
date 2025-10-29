/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:50:57 by abdsebba          #+#    #+#             */
/*   Updated: 2025/10/29 14:50:58 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class AMateria
{
protected:
	std::string type;
public :
	AMateria( void );
	AMateria( std::string const &type );
	AMateria( AMateria const &other );

	std::string const	&getType( void ) const;
	virtual AMateria	*clone( void ) const = 0;
	virtual void	use( ICharacter &target );

	AMateria& operator=( const AMateria& other );
	virtual ~AMateria( void );
};

#endif