/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:49:49 by abdsebba          #+#    #+#             */
/*   Updated: 2025/10/02 14:49:50 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::numberFraction = 1 << 8; // 256

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	fixedNumber = 0;
}

Fixed::Fixed(const int initNumber) {
	std::cout << "Int constructor called" << std::endl;
	fixedNumber = roundf(initNumber * numberFraction);
}

Fixed::Fixed(const Fixed& number) {
	std::cout << "Copy constructor called" << std::endl;
	fixedNumber = number.fixedNumber;
}

Fixed::Fixed(const float initNumber) {
	std::cout << "Float constructor called" << std::endl;
	fixedNumber = roundf(initNumber * numberFraction);
}

float Fixed::toFloat( void ) const {
	return ((float)fixedNumber / numberFraction);
}

int Fixed::toInt( void ) const {
	return (int)(fixedNumber / numberFraction);
}

Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		fixedNumber = other.fixedNumber;
	return *this;
}

std::ostream &operator<<(std::ostream& os, const Fixed& other) {
	os << other.toFloat();
	return os;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
