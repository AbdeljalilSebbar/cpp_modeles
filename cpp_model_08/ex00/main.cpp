#include "easyfind.hpp"

int main() {
	std::vector<int> numbers;
	numbers.push_back(10);
	numbers.push_back(20);
	numbers.push_back(30);
	numbers.push_back(40);
	numbers.push_back(50);

	int searchValue = 50;

	easyfind(numbers, searchValue);
	easyfind(numbers, 300);

	std::vector<int>::iterator it = numbers.begin();
	it.

	return 0;
}
