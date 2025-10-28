/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:28:13 by abdsebba          #+#    #+#             */
/*   Updated: 2025/10/28 14:28:15 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
public:
	WrongCat( void );
	WrongCat( std::string iniType );
	WrongCat( const WrongCat& other );

	WrongCat& operator=( const WrongCat& other );

	std::string	getType( void ) const;
	void	makeSound( void ) const;

	~WrongCat( void );
};

#endif