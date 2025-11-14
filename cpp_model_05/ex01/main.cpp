/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 21:50:56 by abdsebba          #+#    #+#             */
/*   Updated: 2025/11/13 21:50:57 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	try
	{
		Bureaucrat alice("Alice", 50);
		Bureaucrat bob("Bob", 100);

		Form taxForm("TaxForm", 10, 50);
		std::cout << "*--- All The Form’s Information. *---" << std::endl;
		std::cout << taxForm << std::endl;
		std::cout << "*--- End. *---" << std::endl;
		alice.signForm(taxForm);

		bob.signForm(taxForm);		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}