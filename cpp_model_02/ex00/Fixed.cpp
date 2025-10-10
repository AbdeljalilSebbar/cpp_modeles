/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 18:06:31 by abdsebba          #+#    #+#             */
/*   Updated: 2025/09/27 11:32:51 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::numberFraction = 1 << 8;

Fixed::Fixed()
{
	fixedNumber = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &number)
{
	std::cout << "Copy constructor called" << std::endl;
	fixedNumber = number.fixedNumber;
}

Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	fixedNumber = other.fixedNumber;
	return *this;
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return fixedNumber;
}

void	Fixed::setRawBits( int const raw ) {
	fixedNumber = raw;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}
