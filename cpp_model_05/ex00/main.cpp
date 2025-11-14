/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 21:50:23 by abdsebba          #+#    #+#             */
/*   Updated: 2025/11/13 21:50:24 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	try
	{
		Bureaucrat bob("bob", 5);
		std::cout << bob << std::endl;
		std::cout << "-------------------1------------------" << std::endl;
		bob.incrementGrade(); // Grade=4
		std::cout << bob << std::endl;
		std::cout << "-------------------2------------------" << std::endl;
		bob.incrementGrade(); // Grade=3
		std::cout << bob << std::endl;
		std::cout << "-------------------3------------------" << std::endl;
		bob.incrementGrade(); // Grade=2
		std::cout << bob << std::endl;
		std::cout << "-------------------4------------------" << std::endl;
		bob.incrementGrade(); // Grade=1
		std::cout << bob << std::endl;
		std::cout << "-------------------5------------------" << std::endl;
		bob.incrementGrade(); // Grade=0
		std::cout << bob << std::endl;
		std::cout << "-------------------6------------------" << std::endl;
		bob.incrementGrade(); // Grade=-1
		std::cout << bob << std::endl;
		std::cout << "-------------------7------------------" << std::endl;
		bob.incrementGrade(); // Grade=-2
		std::cout << bob << std::endl;
		std::cout << "-------------------8------------------" << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}