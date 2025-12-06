/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 13:15:30 by abdsebba          #+#    #+#             */
/*   Updated: 2025/12/06 13:15:31 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void ):
	maxStore(0)
{
	std::cout << "Default Constructor Called!" << std::endl;
}

Span::Span( unsigned int N ):
	maxStore(N)
{
	std::cout << "Constructor Called!" << std::endl;
}

Span::Span( const Span& other ) {
	*this = other;
	std::cout << "Copy Assignment Constructor Called!" << std::endl;
}

Span& Span::operator=( const Span& other ) {
	if (this != &other) {
		this->maxStore = other.maxStore;
		this->spanArr = other.spanArr;
		std::cout << "Copy Assignment Operator Called!" << std::endl;
	}
	return *this;
}

void	Span::addNumber( int addNum ) {
	if (this->spanArr.size() >= maxStore)
		throw std::out_of_range("You Reach To Max Of Elements");
	this->spanArr.push_back(addNum);
}

unsigned int Span::shortestSpan(void) {
	if (spanArr.size() < 2)
		throw std::out_of_range("Not enough numbers");

	std::vector<int> tmp(spanArr);
	std::sort(tmp.begin(), tmp.end());

	unsigned int shortSpan = static_cast<unsigned int>(-1);

	for (std::size_t i = 0; i < tmp.size() - 1; i++)
	{
		long long diff = static_cast<long long>(tmp[i + 1]) - static_cast<long long>(tmp[i]);
		if (diff < static_cast<long long>(shortSpan))
			shortSpan = static_cast<unsigned int>(diff);
	}
	return shortSpan;
}

unsigned int Span::longestSpan(void) {
	if (spanArr.size() < 2)
		throw std::out_of_range("Not enough numbers");

	int minValue = *std::min_element(spanArr.begin(), spanArr.end());
	int maxValue = *std::max_element(spanArr.begin(), spanArr.end());

	long long diff = static_cast<long long>(maxValue) - static_cast<long long>(minValue);
	return static_cast<unsigned int>(diff);
}

void	Span::addNumberOneCall( const std::vector<int>& newValues ) {
	if (maxStore < spanArr.size() + newValues.size())
		throw std::out_of_range("Can't Add More Then The Max Of This Span");
	spanArr.insert(spanArr.end(), newValues.begin(), newValues.end());
}


Span::~Span( void ) {
	std::cout << "Destructor Called!" << std::endl;
}
