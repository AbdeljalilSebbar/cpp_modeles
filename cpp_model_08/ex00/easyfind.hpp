/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 13:14:37 by abdsebba          #+#    #+#             */
/*   Updated: 2025/12/06 13:34:54 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
void	easyfind( T& first, int second ) {
	typename T::iterator value = std::find(first.begin(), first.end(), second);
	if (value != first.end()) {
		std::cout << "Value " << second << " found at index: " << std::distance(first.begin(), value) << std::endl;
	} else {
		std::cout << "Value " << second << " not found." << std::endl;
	}
}

#endif