/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 18:01:43 by abdsebba          #+#    #+#             */
/*   Updated: 2025/09/20 18:01:44 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main( void ) {
	std::string name = "HI THIS IS BRAIN";
	std::string *stringPTR = &name;
	std::string &stringREF = name;

	std::cout << "On Memory:" << std::endl;

	std::cout << "The memory address of the string variable: " << &name << std::endl;
	std::cout << "The memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF: " << &stringREF << std::endl;

	std::cout << "Value:" << std::endl;

	std::cout << "The value of the string variable: " << name << std::endl;
	std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;

	return 0;
}
