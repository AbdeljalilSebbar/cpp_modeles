/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 13:15:34 by abdsebba          #+#    #+#             */
/*   Updated: 2025/12/06 13:15:35 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

class Span
{
private:
	unsigned int maxStore;
	std::vector<int> spanArr;
public:
	Span( void );
	Span( unsigned int N );
	Span( const Span& other );
	Span& operator=( const Span& other );
	~Span( void );

	void	addNumber( int addNum );
	unsigned int	shortestSpan( void );
	unsigned int	longestSpan( void );

	void	addNumberOneCall( const std::vector<int>& newValues );
};


#endif