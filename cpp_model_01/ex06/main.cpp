/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 18:05:17 by abdsebba          #+#    #+#             */
/*   Updated: 2025/09/20 18:05:18 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char *avp[]) {
    if (ac != 2)
    {
        std::cout << "You didn't choose level: <DEBUG> | <INFO> | <WARNING> | <ERROR>" << std::endl;
        return -1;
    }

    Harl h1;
    std::string level = avp[1];
    h1.complain(level);
    return 0;
}