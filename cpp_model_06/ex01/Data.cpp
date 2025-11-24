/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 16:54:42 by abdsebba          #+#    #+#             */
/*   Updated: 2025/11/23 16:54:43 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(int id, std::string name): Id(id), name(name)
{
    std::cout << "Call the Data struct constructor" << std::endl;
}
Data::~Data( void ) {
    std::cout << "Data Called Its Destructor" << std::endl;
}
