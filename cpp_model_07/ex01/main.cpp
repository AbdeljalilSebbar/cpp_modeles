#include "iter.hpp"

void	makeToUpper( std::string& value ) {
	char c;
	for (size_t i = 0; i < value.length(); i++)
	{
		c = std::toupper(value[i]);
		std::cout << c;
	}
	std::cout << std::endl;
}

void	checkPositiveNum( int& num ) {
	if (num >= 0)
		std::cout << num << " ";
}

int main() {
	const int size = 2;
	std::string array[size] = {"hello", "world"};
	for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << std::endl;
	}
	iter<std::string>(array, size, makeToUpper);

	// const int size = 11;
	// int array[size] = {37, -12, 84, -49, 5, -23, 68, -7, 91, -34, 16};
	// for (int i = 0; i < size; i++)
	// {
	// 	std::cout << array[i] << " ";
	// }
	// std::cout << std::endl;
	// iter(array, size, checkPositiveNum);
	// std::cout << std::endl;

	return 0;
}
