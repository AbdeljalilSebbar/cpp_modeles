/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 16:54:37 by abdsebba          #+#    #+#             */
/*   Updated: 2025/11/23 16:54:38 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <limits>
#include <climits>

class ScalarConverter
{
private:

public:
	ScalarConverter( void );
	ScalarConverter( const ScalarConverter& other );
	ScalarConverter& operator=( const ScalarConverter& other );
	static void	convert( std::string& value );

	~ScalarConverter( void );
};


#endif