#include "RPN.hpp"

int main(int ac, char* avp[]) {
	if (ac != 2)
	{
		std::cerr << "INVALID USAGE!?" << std::endl;
		std::cerr << "valid Usage: ./RPN `Reverse Polish Notation('8 9 * 9 - 9 - 9 - 4 - 1 +')`" << std::endl;
		return -1;
	}
	std::string input = avp[1];
	if (input.empty())
	{
		std::cerr << "" << std::endl;
		return -1;
	}
	RPN calcu(input);
	calcu.calculateRun();
	return 0;
}
