/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 18:04:42 by abdsebba          #+#    #+#             */
/*   Updated: 2025/09/23 22:31:13 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( void ) {
    Harl jim;

    jim.complain("DEBUG");
    jim.complain("INFO");
    jim.complain("WARNING");
    jim.complain("ERROR");

    return 0;
}