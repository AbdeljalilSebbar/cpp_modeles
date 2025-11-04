#include "Bureaucrat.hpp"

int main() {

	try
	{
		Bureaucrat alice("Alice", 50);
		Bureaucrat bob("Bob", 100);

		Form taxForm("TaxForm", 100, 50);
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