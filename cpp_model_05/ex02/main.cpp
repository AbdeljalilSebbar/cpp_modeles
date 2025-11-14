/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 21:51:24 by abdsebba          #+#    #+#             */
/*   Updated: 2025/11/13 21:51:25 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main() {
	try {
		std::cout << "** Create bureaucrats **" << std::endl;
		Bureaucrat alice("Alice", 1);  // high rank
		Bureaucrat bob("Bob", 150);     // medium rank
		Bureaucrat charlie("Charlie", 150); // low rank

		std::cout << "** Create forms **" << std::endl;
		ShrubberyCreationForm shrub("Home");
		RobotomyRequestForm robot("Bender");
		PresidentialPardonForm pardon("Arthur Dent");

		std::cout << "** --- Testing ShrubberyCreationForm --- **" << std::endl;
		bob.signForm(shrub);
		bob.executeForm(shrub);  // Bob has enough grade to sign and execute

		std::cout << "** --- Testing RobotomyRequestForm --- **" << std::endl;
		alice.signForm(robot);
		alice.executeForm(robot); // Alice has high enough grade to execute

		charlie.executeForm(robot); // Should fail due to low grade

		std::cout << "** --- Testing PresidentialPardonForm --- **" << std::endl;
		alice.signForm(pardon);
		alice.executeForm(pardon); // Should succeed

		bob.executeForm(pardon);   // Should fail due to low grade
		std::cout << "** --- End Testing --- **" << std::endl;

	} catch (std::exception &e) {
		std::cerr << "Exception caught in main: " << e.what() << std::endl;
	}

	return 0;
}
