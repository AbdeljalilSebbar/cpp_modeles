/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 18:06:28 by abdsebba          #+#    #+#             */
/*   Updated: 2025/10/02 14:55:08 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int fixedNumber;
		static const int numberFraction;
	public:
		Fixed();
		Fixed(const Fixed &number);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		Fixed &operator=(const Fixed& other);
		~Fixed();
};

#endif