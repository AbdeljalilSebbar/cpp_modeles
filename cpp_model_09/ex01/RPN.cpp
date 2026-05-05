#include "RPN.hpp"

RPN::RPN( std::string init ): inputVal(init)
{}

RPN::RPN( const RPN& other ) {
	*this = other;
}

RPN& RPN::operator=( const RPN& other ) {
	if (this != &other) {
		this->calculate = other.calculate;
		this->inputVal = other.inputVal;
	}
	return *this;
}

RPN::~RPN( void ) {}

bool	checkSign(char c)
{
	if (c == '-' || c == '+')
		return true;
	return false;
}

bool	checkOperator(char c)
{
	if (c == '-' || c == '+' || c == '*' || c == '/')
		return true;
	return false;
}

bool	checkInput( std::string value ) {
	for (size_t i = 0; i < value.size(); i++)
	{
		if (!std::isdigit(value[i]) 
			&& !checkSign(value[i])
			&& !checkOperator(value[i])
			&& value[i] != ' ' && value[i] != '\t') {
			std::cerr << "Error" << std::endl;
			return true;
		}
	}
	return false;
}

int	handleOperator(int val1, int val2, char op) {
	int res = 0;
	if (op == '+')
		res = val1 + val2;
	else if (op == '-')
		res = val1 - val2;
	else if (op == '*')
		res = val1 * val2;
	else if (op == '/')
	{
		if (val2 == 0)
			return res = -1;
		res = val1 / val2;
	}
	else
		res = -1;
	return res;
}

void	RPN::executeValue( std::string input, std::stack<int>& listCal) {
	for (size_t i = 0; i < input.size(); i++)
	{
		if (std::isdigit(input[i]))
			listCal.push(std::atoi(&input[i]));
		else if (checkOperator(input[i])) {
			if (listCal.size() < 2) {
				std::cerr << "Error" << std::endl;
				return ;
			}
			int val2 = listCal.top();
			listCal.pop();
			int val1 = listCal.top();
			listCal.pop();
			int res = handleOperator(val1, val2, input[i]);
			if (res == -1) {
				std::cerr << "Error" << std::endl;
				return ;
			}
			listCal.push(res);
		}
	}
	if (listCal.size() != 1) {
		std::cerr << "Error" << std::endl;
	} else
		std::cout << listCal.top() << std::endl;
}

void	RPN::calculateRun( void ) {
	if (checkInput(this->inputVal))
		return ;
	executeValue(this->inputVal, this->calculate);
}
