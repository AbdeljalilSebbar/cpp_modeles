/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 16:55:33 by abdsebba          #+#    #+#             */
/*   Updated: 2025/11/23 16:55:35 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::C( void ): Base() {
	std::cout << "C Constructor Called!" << std::endl;
}

C::~C( void ) {
	std::cout << "C Destructor Called!" << std::endl;
}
