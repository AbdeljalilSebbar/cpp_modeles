#include "PmergeMe.hpp"

PmergeMe::PmergeMe( std::string init )
{
	this->input = init;
}

PmergeMe::PmergeMe( const PmergeMe& other ) {
	*this = other;
}

PmergeMe&	PmergeMe::operator=( const PmergeMe& other ) {
	if (this != &other) {
		this->input = other.input;
	}
	return *this;
}

PmergeMe::~PmergeMe( void )
{}

void	PmergeMe::printOutput( void ) {
	std::cout << "Before: " << this->input << std::endl;
	std::cout << "After: " << std::endl;
}

bool	ft_atoi( std::string str ) {
	unsigned long long res = 0;
	unsigned long long max = 2147483647;
	
	for (std::size_t i = 0; i < str.size(); i++)
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			res = res * 10 + (str[i] - '0');
			if (res > max)
			{
				std::cerr << "Error" << std::endl;
				return false;
			}
		}
		else
			res = 0;
	}
	return true;
}

bool	checkInput( std::string str ) {
	for (std::size_t i = 0; i < str.size(); i++)
	{
		if (!std::isdigit(str[i]) && str[i] != ' ' && str[i] != '\t')
		{
			std::cerr << "Error" << std::endl;
			return false;
		}
	}
	return true;
}

void	PmergeMe::mergeSortRecursion( void ) {
	if (this->numbers.size() == 1)
		return;
	std::vector<int> pairsA;
	std::vector<int> pairsB;
	pairsA = this->numbers.front();
	this->numbers.erase(this->numbers.begin());
	pairsB = this->numbers.front();
	this->numbers.erase(this->numbers.begin());
	if (pairsA[0] < pairsB[0])
	{
		std::vector<int> values;
		for (std::size_t i = 0; i < pairsB.size(); i++)
			values.push_back(pairsB[i]);
		for (std::size_t i = 0; i < pairsA.size(); i++)
			values.push_back(pairsA[i]);
		this->numbers.push_back(values);
	}
	else {
		std::vector<int> values;
		for (std::size_t i = 0; i < pairsA.size(); i++)
			values.push_back(pairsA[i]);
		for (std::size_t i = 0; i < pairsB.size(); i++)
			values.push_back(pairsB[i]);
		this->numbers.push_back(values);
	}
	return mergeSortRecursion();
}

void PmergeMe::handleInsertionProcess(std::vector<int>& vPend) {
	if (vPend.empty() || this->numbers.empty()) return;

	// Use a reference to avoid copying the whole vector until necessary
	std::vector<int>& currentNumbers = this->numbers[0];

	size_t pendHalf = vPend.size() / 2;
	size_t numHalf = currentNumbers.size() / 2;

	// --- 1. Handle Main Chain ---
	// Clear and prepare the specific vectors you are filling
	std::vector<int> firstHalfPend(vPend.begin(), vPend.begin() + pendHalf);
	std::vector<int> firstHalfNums(currentNumbers.begin(), currentNumbers.begin() + numHalf);

	this->mainChain.clear(); 
	this->mainChain.push_back(firstHalfPend);
	this->mainChain.push_back(firstHalfNums);

	// --- 2. Handle Pend Chain ---
	std::vector<int> secondHalfPend(vPend.begin() + pendHalf, vPend.end());
	std::vector<int> secondHalfNums(currentNumbers.begin() + numHalf, currentNumbers.end());

	this->pendChain.clear();
	this->pendChain.push_back(secondHalfPend);
	this->pendChain.push_back(secondHalfNums);

	// std::cout << "size main chain (first part): " << this->mainChain.size() << std::endl;
	// std::cout << "size main chain (first part): " << this->mainChain[0].at(0) << std::endl;
	// for (size_t i = 0; i < this->mainChain[0].size(); i++)
	// {
	// 	std::cout << this->pendChain[0].at(i) << std::endl;
	// }
	
}

void	PmergeMe::startCreatePairs( std::vector<std::string>& values ) {
	std::size_t i = 0;
	std::size_t flag = 0;
	std::vector<int> pairs;
	for (i = 0; i < values.size(); i++)
	{
		int val = std::atoi(values.at(i).c_str());
		pairs.push_back(val);
		if (pairs.size() == 2)
		{
			if (pairs[0] < pairs[1])
				std::swap(pairs[0], pairs[1]);
			this->numbers.push_back(pairs);
			pairs.clear();
			flag = i;
		}
	}
	values.erase(values.begin(), values.begin() + flag+1);
	// std::cout << this->numbers.size() << std::endl;
	this->mergeSortRecursion();
	// for (size_t i = 0; i < this->numbers[0].size(); i++)
	// {
	// 	std::cout << "value: " << this->numbers[0].at(i) << std::endl;
	// }
	pairs.clear();
	std::vector<int>& pairMain = this->numbers[0];
	std::vector<int>::iterator splitPoint = pairMain.begin() + (pairMain.size() / 2);
	pairs.insert(pairs.end(), splitPoint, pairMain.end());
	pairMain.erase(splitPoint, pairMain.end());
	// std::cout << "----------------" << this->numbers.size() << std::endl;
	// for (size_t i = 0; i < this->numbers[0].size(); i++)
	// {
	// 	std::cout << "value: " << this->numbers[0].at(i) << std::endl;
	// }
	// this->numbers[0]; // main_chain
	// pairs; // pend_chain
	handleInsertionProcess(pairs);
	
}

void	PmergeMe::parceInput( void ) {
	if (!checkInput(this->input))
		return ;
	if (!ft_atoi(this->input))
		return ;

	std::vector<std::string> values;
	std::stringstream ss(this->input);
	std::string temp;
	while (ss >> temp) {
		values.push_back(temp);
	}
	this->startCreatePairs(values);
}
