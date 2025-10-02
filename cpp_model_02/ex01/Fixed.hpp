/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:49:52 by abdsebba          #+#    #+#             */
/*   Updated: 2025/10/02 14:49:53 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
#define	FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int fixedNumber;
	static const int numberFraction;
public:
	Fixed();
	Fixed(const int initNumber);
	Fixed(const float initNumber);
	Fixed(const Fixed& number);
	float toFloat( void ) const;
	int toInt( void ) const;
	Fixed& operator=(const Fixed& other);
	~Fixed();
};

std::ostream &operator<<(std::ostream& os, const Fixed& other);

#endif