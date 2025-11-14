/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 21:52:28 by abdsebba          #+#    #+#             */
/*   Updated: 2025/11/14 10:27:03 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
	AForm* rrf;
	try {
		Intern someRandomIntern;
		Bureaucrat alice("Alice", 1);

		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		if (!rrf) {
			std::cerr << "Form creation failed\n";
			return -1;
		}

		alice.signForm(*rrf);
		alice.executeForm(*rrf);
	}
	catch (std::exception &e)
	{
		std::cerr << "Exception caught in main: " << e.what() << std::endl;
	}
	delete rrf;
	return 0;
}
