/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:51:11 by abdsebba          #+#    #+#             */
/*   Updated: 2025/10/29 14:51:12 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria
{
public:
	Cure( void );
	Cure( const Cure& other );
	Cure( std::string type );

	std::string	getType( void ) const;
	AMateria	*clone( void ) const;
	void	use( ICharacter &target );

	Cure& operator=( const Cure& other );
	~Cure( void );
};

#endif