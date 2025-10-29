/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:51:16 by abdsebba          #+#    #+#             */
/*   Updated: 2025/10/29 14:51:17 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria
{
public:
	Ice( void );
	Ice( const Ice& other );
	Ice( std::string type );

	std::string	getType( void ) const;
	AMateria	*clone( void ) const;
	void	use( ICharacter &target );

	Ice& operator=( const Ice& other );
	~Ice( void );
};

#endif