/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:27:00 by abdsebba          #+#    #+#             */
/*   Updated: 2025/10/28 14:27:01 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
protected:
	std::string type;
public:
	Animal( void );
	Animal( const Animal& other );
	Animal( std::string initType );

	Animal& operator=( const Animal& other );

	std::string	getType( void ) const;
	virtual void	makeSound( void ) const = 0;

	virtual ~Animal( void );
};

#endif