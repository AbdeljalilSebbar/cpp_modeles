#include "PmergeMe.hpp"

int main(int ac, char* avp[]) {
	if (ac < 2)
	{
		std::cerr << "Invalid usage you need: ./PmergeMe POSITIVENUMBERSTOSORTE" << std::endl;
		return -1;
	}
	std::string val;
	for (int i = 1; i < ac; i++)
	{
		val += avp[i];
		if (i + 1 < ac)
			val += " ";
	}
	// std::cout << val << std::endl;
	if (val.empty())
	{
		std::cerr << "Error" << std::endl;
		return -1;
	}
	PmergeMe mergeSort(val);
	mergeSort.parceInput();
	return 0;
}
