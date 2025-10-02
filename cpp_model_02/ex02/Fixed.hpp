/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:50:07 by abdsebba          #+#    #+#             */
/*   Updated: 2025/10/02 14:50:08 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

/*
	==* comparison operators: '>, <, >=, <=, ==, and !='
	==* arithmetic operators: '+, -, *, and /'
*/


class Fixed
{
private:
	int fixedNumber;
	static const int numberFraction;
public:
	Fixed( void );
	Fixed( int initPoint );
	Fixed( float initPoint );
	Fixed( const Fixed& other );

	float getData( void ) const;

	//Define arithmetic operators:
	Fixed operator+(const Fixed& other);
	Fixed operator-(const Fixed& other);
	Fixed operator*(const Fixed& other);
	Fixed operator/(const Fixed& other);

	//Define in/decrement operators:
	Fixed operator++();//Prefix
	Fixed operator++(int);//postfix
	Fixed operator--();//Prefix
	Fixed operator--(int);//postfix

	//verloaded member functions:
	static Fixed& min( Fixed& a, Fixed& b );
	static const Fixed& min( const Fixed& a, const Fixed& b );
	static Fixed& max( Fixed& a, Fixed& b );
	static const Fixed& max( const Fixed& a, const Fixed& b );

	~Fixed();
};

//Define output:
std::ostream& operator<<(std::ostream& os, const Fixed& other);

//Define comparison operators:
bool operator<(const Fixed& left, const Fixed& right);
bool operator>(const Fixed& left, const Fixed& right);
bool operator<=(const Fixed& left, const Fixed& right);
bool operator>=(const Fixed& left, const Fixed& right);
bool operator==(const Fixed& left, const Fixed& right);
bool operator!=(const Fixed& left, const Fixed& right);

#endif