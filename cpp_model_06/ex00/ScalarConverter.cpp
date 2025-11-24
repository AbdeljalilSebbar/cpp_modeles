/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdsebba <abdsebba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 16:54:31 by abdsebba          #+#    #+#             */
/*   Updated: 2025/11/23 16:54:32 by abdsebba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter( void ) {
	// std::cout << "Default Constructor Called!" << std::endl;
}

ScalarConverter::ScalarConverter( const ScalarConverter& other ) {
	*this = other;
	// std::cout << "Copy assignment Constructor Called!" << std::endl;
}

ScalarConverter& ScalarConverter::operator=( const ScalarConverter& other ) {
	if (this != &other) {
		// std::cout << "Copy assignment Operator Called!" << std::endl;
	}
	return *this;
}

int	checkIsChar( std::string& value ) {
	return value.length() == 1 && !std::isdigit(value[0]);
}

int	checkIsInt( std::string& value ) {
	size_t i = 0;
	if (value[0] == '-' || value[0] == '+')
		i++;
	for (; i < value.length(); i++)
	{
		if (!std::isdigit(value[i]))
			return 0;
	}
	return 1;
}

int	checkIsFloat( std::string& value ) {
	size_t i = 0;
	int count = 0;
	bool hasDigit = false;

	if (value.at(value.length() - 1) != 'f')
		return 0;
	if (value == "nanf" || value == "-inff" || value == "+inff" || value == "inff")
		return 1;
	if (value[0] == '-' || value[0] == '+')
		i++;
	for (; i < value.length() - 1; i++)
	{
		if (value[i] == '.')
			count++;
		else if (std::isdigit(value[i]))
			hasDigit = true;
		else
			return 0;
	}
	if (count > 1 || count == 0 || !hasDigit)
		return 0;
	return 1;
}

int checkIsDouble(std::string& value) {
	size_t i = 0;
	int count = 0;
	bool hasDigit = false;

	if (value == "nan" || value == "-inf" || value == "+inf" || value == "inf")
		return 1;

	if (value[0] == '-' || value[0] == '+')
		i++;

	for (; i < value.length(); i++)
	{
		if (value[i] == '.')
		{
			count++;
			if (!std::isdigit(value[i + 1]))
				return 0;
			if (i == 0)
				return 0;
		}
		else if (std::isdigit(value[i]))
			hasDigit = true;
		else
			return 0;
	}
	return (count == 1 && hasDigit);
}

void	ft_fixConvertBaseOnType(std::string& value, double& str_dou, float& f, char& c, int& x) {
	if (checkIsChar(value))
	{
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
	}
	else if (checkIsInt(value))
	{
		if (value == "nanf" || value == "-inff" || value == "+inff" || value == "-inf" || value == "+inf" || value == "nan")
			std::cout << "char: impossible" << std::endl;
		else
		{
			char c = static_cast<unsigned char>(str_dou);
			if (std::isprint(c))
				std::cout << "char: '" << c << "'" << std::endl;
			else
				std::cout << "char: Non displayable" << std::endl;
		}
		if (str_dou > INT_MAX || str_dou < INT_MIN)
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << x << std::endl;
		std::cout << "float: " << static_cast<float>(str_dou) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(str_dou) << ".0" <<  std::endl;
	}
	else if (checkIsFloat(value))
	{
		if (value == "nanf" || value == "-inff" || value == "+inff" || value == "-inf" || value == "+inf" || value == "nan")
			std::cout << "char: impossible" << std::endl;
		else
		{
			char c = static_cast<unsigned char>(str_dou);
			if (std::isprint(c))
				std::cout << "char: '" << c << "'" << std::endl;
			else
				std::cout << "char: Non displayable" << std::endl;
		}
		if (value == "nanf" || value == "-inff" || value == "+inff" || f > INT_MAX || f < INT_MIN)
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(f) << std::endl;
		if (f == static_cast<int>(f))
			std::cout << "float: " << f << ".0f" << std::endl;
		else
			std::cout << "float: " << f << "f" << std::endl;
		if (str_dou == static_cast<int>(str_dou))
			std::cout << "double: " << static_cast<double>(str_dou) << ".0" <<  std::endl;
		else
			std::cout << "double: " << static_cast<double>(str_dou) <<  std::endl;
	}
	else if (checkIsDouble(value))
	{
		if (value == "nanf" || value == "-inff" || value == "+inff" || value == "-inf" || value == "+inf" || value == "nan")
			std::cout << "char: impossible" << std::endl;
		else
		{
			char c = static_cast<unsigned char>(str_dou);
			if (std::isprint(c))
				std::cout << "char: '" << c << "'" << std::endl;
			else
				std::cout << "char: Non displayable" << std::endl;
		}
		if (value == "nan" || value == "-inf" || value == "+inf")
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(str_dou) << std::endl;
		if (f == static_cast<int>(f))
			std::cout << "float: " << static_cast<float>(f) << ".0f" << std::endl;
		else
			std::cout << "float: " << f << "f" << std::endl;
		if (str_dou == static_cast<int>(str_dou))
			std::cout << "double: " << str_dou << ".0" <<  std::endl;
		else
			std::cout << "double: " << str_dou <<  std::endl;
	}
}

int	checkInput( std::string& value ) {
	if (!checkIsChar(value) 
		&& !checkIsInt(value) 
		&& !checkIsFloat(value) 
		&& !checkIsDouble(value))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return 1;
	}
	return 0;
}

void	ScalarConverter::convert( std::string& value ) {
	if (checkInput(value))
		return ;
	std::string tmp;
	if (checkIsFloat(value) && value != "nanf" && value != "-inff" && value != "+inff" && value != "-inf" && value != "+inf")
		tmp = value.substr(0, value.length() - 1);
	else
		tmp = value;
	char c;
	int x;
	float f;
	double str_dou;
	std::stringstream ss(tmp);
	ss >> str_dou;
	if (ss.fail()) {
		if (value == "nan")
			str_dou = std::numeric_limits<double>::quiet_NaN();
		else if (value == "nanf")
			str_dou = std::numeric_limits<float>::quiet_NaN();
		else if (value == "-inff")
			str_dou = -std::numeric_limits<float>::infinity();
		else if (value == "+inff" || value == "inff")
			str_dou = std::numeric_limits<float>::infinity();
		else if (value == "-inf")
			str_dou = -std::numeric_limits<double>::infinity();
		else if (value == "+inf" || value == "inf")
			str_dou = std::numeric_limits<double>::infinity();
	}
	if (checkIsChar(value))
	{
		c = static_cast<unsigned char>(value[0]);
		if (std::isprint(c))
			std::cout << "char: '" << value[0] << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	else if (checkIsInt(value))
	{
		x = static_cast<int>(str_dou);
	}
	else if (checkIsFloat(value))
	{
		f = static_cast<float>(str_dou);
	}
	else if (checkIsDouble(value))
	{
		f = static_cast<float>(str_dou);
	}
	ft_fixConvertBaseOnType(value, str_dou, f, c, x);
}

ScalarConverter::~ScalarConverter( void ) {
	// std::cout << "Destructor Called!" << std::endl;
}
