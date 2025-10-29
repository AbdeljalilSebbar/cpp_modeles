/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:51:04 by abdsebba          #+#    #+#             */
/*   Updated: 2025/10/29 14:51:05 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character: public ICharacter
{
protected:
	std::string	name;
	AMateria*	Inventory[4];
	AMateria*	oldAddr[4];

public:
	Character( void );
	Character( std::string name );
	Character( const Character& other );

	Character& operator=( const Character& other );

	virtual std::string const &getName( void ) const;
	virtual void equip( AMateria *m );
	virtual void unequip( int idx );
	virtual void use( int idx, ICharacter &target );

	virtual ~Character( void );
};

#endif