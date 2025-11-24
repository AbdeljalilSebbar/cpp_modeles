/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 16:55:22 by abdsebba          #+#    #+#             */
/*   Updated: 2025/11/23 16:55:23 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A( void ): Base() {
	std::cout << "A Constructor Called!" << std::endl;
}

A::~A( void ) {
	std::cout << "A Destructor Called!" << std::endl;
}
