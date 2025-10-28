/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:24:48 by abdsebba          #+#    #+#             */
/*   Updated: 2025/10/28 14:24:49 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal{
public:
	Dog( void );
	Dog( std::string initType );
	Dog( const Dog& other );

	Dog& operator=( const Dog& other );

	std::string getType( void ) const;
	void	makeSound( void ) const;

	~Dog( void );
};

#endif