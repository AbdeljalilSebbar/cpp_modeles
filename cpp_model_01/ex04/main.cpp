/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 18:04:10 by abdsebba          #+#    #+#             */
/*   Updated: 2025/09/23 14:42:26 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "handleFile.hpp"

int main(int ac, char *av[]) {
	if (ac != 4)
	{
		std::cout << ": Not Enough Parameters" << std::endl;
		return -1;
	}
	std::string initFile = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	if (initFile.empty())
	{
		std::cout << ": Not Enough Parameters (need file to read from!)" << std::endl;
		return -1;
	}
	if (s1.empty())
	{
		std::cout << ": Not Enough Parameters (no string have been add to change!)" << std::endl;
		return -1;
	}
	HandleFile file(initFile);
	if (file.copyFileWithReplace(s1, s2))
		return -1;
	return 0;
}
