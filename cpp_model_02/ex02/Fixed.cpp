/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:50:03 by abdsebba          #+#    #+#             */
/*   Updated: 2025/10/02 14:50:04 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::numberFraction = 1 << 8;

Fixed::Fixed( void ):fixedNumber(0){}

Fixed::Fixed( const int initPoint) {
	fixedNumber = roundf(initPoint * numberFraction);
}

Fixed::Fixed( const float initPoint) {
	fixedNumber = roundf(initPoint * numberFraction);
}

Fixed::Fixed( const Fixed& other ) {
	fixedNumber = other.fixedNumber;
}

Fixed::~Fixed() {}

//Define GET:
float Fixed::getData( void ) const{
	return ((float)fixedNumber / numberFraction);
}

//Define output:
std::ostream& operator<<(std::ostream& os, const Fixed& other) {
	os << other.getData();
	return os;
}

//Define comparison operators:
bool operator<(const Fixed& left, const Fixed& right) {
	return (left.getData() < right.getData());
}

bool operator>(const Fixed& left, const Fixed& right) {
	return (left.getData() > right.getData());
}

bool operator<=(const Fixed& left, const Fixed& right) {
	return (left.getData() <= right.getData());
}

bool operator>=(const Fixed& left, const Fixed& right) {
	return (left.getData() >= right.getData());
}

bool operator==(const Fixed& left, const Fixed& right) {
	return (left.getData() == right.getData());
}

bool operator!=(const Fixed& left, const Fixed& right) {
	return (left.getData() != right.getData());
}

//Define in/decrement operators:
Fixed Fixed::operator++() { //need explain
	fixedNumber++;
	return *this;
}

Fixed Fixed::operator++(int) { //need explain
	Fixed tmp = *this;
	fixedNumber++;
	return tmp;
}

Fixed Fixed::operator--() { //need explain
	fixedNumber--;
	return *this;
}

Fixed Fixed::operator--(int) { //need explain
	Fixed tmp = *this;
	fixedNumber--;
	return tmp;
}

//Define arithmetic operators:
Fixed Fixed::operator+( const Fixed& other ) {//need explain
	Fixed tmp;
	tmp.fixedNumber = (this->fixedNumber + other.fixedNumber);
	return tmp;
}

Fixed Fixed::operator-( const Fixed& other ) {//need explain
	Fixed tmp;
	tmp.fixedNumber = (this->fixedNumber - other.fixedNumber);
	return tmp;
}

Fixed Fixed::operator*( const Fixed& other ) {//need explain
	Fixed tmp;
	tmp.fixedNumber = (this->fixedNumber * other.fixedNumber) / numberFraction;
	return tmp;
}

Fixed Fixed::operator/( const Fixed& other ) { //need an explain!!
	Fixed tmp;
	tmp.fixedNumber = (this->fixedNumber * numberFraction / other.fixedNumber);
	return tmp;
}

//verloaded member functions:
Fixed& Fixed::min( Fixed& a, Fixed& b ) {
	if (a > b)
		return b;
	return a;
}

const Fixed& Fixed::min( const Fixed& a, const Fixed& b ) {
	if (a > b)
		return b;
	return a;
}

Fixed& Fixed::max( Fixed& a, Fixed& b ) {
	if (a > b)
		return a;
	return b;
}

const Fixed& Fixed::max( const Fixed& a, const Fixed& b ) {
	if (a > b)
		return a;
	return b;
}
