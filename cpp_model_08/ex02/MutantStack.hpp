/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 13:17:02 by abdsebba          #+#    #+#             */
/*   Updated: 2025/12/06 13:17:03 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
public:
	MutantStack( void );
	MutantStack( const MutantStack& other );
	MutantStack& operator=( const MutantStack& other );
	~MutantStack( void );

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator	begin( void );
	iterator	end( void );
};

#endif