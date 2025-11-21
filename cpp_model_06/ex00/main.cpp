#include "ScalarConverter.hpp"

int main(int ac, char *avp[]) {
	if (ac != 2)
	{
		std::cout << "Not enough argument!" << std::endl;
		return -1;
	}
	std::string value = avp[1];
	if (value.empty())
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return -1;
	}
	ScalarConverter::convert(value);
	return 0;
}
