/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 16:55:26 by abdsebba          #+#    #+#             */
/*   Updated: 2025/11/23 16:55:27 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B( void ): Base() {
	std::cout << "B Constructor Called!" << std::endl;
}

B::~B( void ) {
	std::cout << "B Destructor Called!" << std::endl;
}
