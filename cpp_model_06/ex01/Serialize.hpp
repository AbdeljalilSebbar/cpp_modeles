/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 16:54:57 by abdsebba          #+#    #+#             */
/*   Updated: 2025/11/23 16:54:58 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <iostream>
#include <string>
#include <cstdint>
#include "Data.hpp"

class	Serializer
{
public:
	Serializer( void );
	Serializer( const Serializer& other );
	Serializer& operator=( const Serializer& other );

	static	uintptr_t serialize( Data* ptr );
	static	Data* deserialize( uintptr_t raw );

	~Serializer( void );
};


#endif