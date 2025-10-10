/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:02:57 by abdsebba          #+#    #+#             */
/*   Updated: 2025/09/10 11:48:10 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int ac, char *av[])
{
	char	c;

	if (ac == 1)
		return std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 1;

	std::string	str = "";

	for (int i = 1; i < ac; i++)
		str += av[i];

	for (int i = 0; str[i]; i++)
	{
		c = std::toupper(str[i]);
		std::cout << c;
	}
	std::cout << std::endl;
	return 0;
}
