/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:26:26 by abdsebba          #+#    #+#             */
/*   Updated: 2025/10/28 14:26:27 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal( void );
	WrongAnimal( std::string initType );
	WrongAnimal( const WrongAnimal& other );

	WrongAnimal& operator=( const WrongAnimal& other );

	std::string	getType( void ) const;
	void	makeSound( void ) const;

	~WrongAnimal();
};


#endif