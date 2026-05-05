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
		this->sortedNumbersVector = other.sortedNumbersVector;
		this->sortedNumbersDeque = other.sortedNumbersDeque;
	}
	return *this;
}

PmergeMe::~PmergeMe( void )
{}

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

void	PmergeMe::printOutput( void ) {
	std::cout << "Before: " << this->input << std::endl;
	std::cout << "After: ";
	for (std::size_t i = 0; i < this->sortedNumbersVector.size(); ++i) {
		std::cout << this->sortedNumbersVector[i];
		if (i + 1 < this->sortedNumbersVector.size())
			std::cout << " ";
	}
	std::cout << std::endl;
	std::cout << std::fixed << std::setprecision(5);
	std::cout << "Time to process a range of " << this->sortedNumbersVector.size() << " elements with std::vector : " << this->durationVector << " us" << std::endl;
	std::cout << "Time to process a range of " << this->sortedNumbersDeque.size() << " elements with std::deque : " << this->durationDeque << " us" << std::endl;
}

std::vector<size_t> generateJacobsthal(size_t n) {
	std::vector<size_t> j;
	j.push_back(0);
	j.push_back(1);
	while (j.back() < n) {
		j.push_back(j[j.size() - 1] + 2 * j[j.size() - 2]);
	}
	return j;
}

void	PmergeMe::fordJohnsonSortVector(std::vector<int>& arr) {
	if (arr.size() <= 1)
		return ;
	std::vector<std::pair<int, int> > pairs;
	std::vector<int> straggler;
	for (size_t i = 0; i + 1 < arr.size(); i += 2) {
		if (arr[i] > arr[i + 1])
			pairs.push_back(std::make_pair(arr[i], arr[i + 1]));
		else
			pairs.push_back(std::make_pair(arr[i + 1], arr[i]));
	}
	if (arr.size() % 2 != 0)
		straggler.push_back(arr[arr.size() - 1]);
	std::vector<int> winners;
	for (size_t i = 0; i < pairs.size(); i++)
		winners.push_back(pairs[i].first);
	fordJohnsonSortVector(winners);
	std::vector<int> pend;
	std::vector<bool> used(pairs.size(), false);
	for (size_t i = 0; i < winners.size(); i++) {
		for (size_t j = 0; j < pairs.size(); j++) {
			if (!used[j] && (winners[i] == pairs[j].first)) {
				pend.push_back(pairs[j].second);
				used[j] = false;
				break ;
			}
		}
	}
	std::vector<int> mainChain = winners;
	mainChain.insert(std::lower_bound(mainChain.begin(), mainChain.end(), pend[0]), pend[0]);
	std::vector<size_t> jacobsthal = generateJacobsthal(pend.size());
	std::vector<bool> inserted(pend.size(), false);
	inserted[0] = true;
	for (size_t k = 2; k < jacobsthal.size(); k++) {
		size_t idx = jacobsthal[k];
		if (idx > pend.size())
			idx = pend.size();
		for (size_t i = idx; i > 0; i--) {
			if (i - 1 < pend.size() && !inserted[i - 1]) {
				int value = pend[i - 1];
				std::vector<int>::iterator insertPos = std::lower_bound(mainChain.begin(), mainChain.end(), value);
				mainChain.insert(insertPos, value);
				inserted[i - 1] = true;
			}
		}
	}
	for (size_t i = 0; i < pend.size(); i++) {
		if (!inserted[i]) {
			int value = pend[i];
			std::vector<int>::iterator pos = std::lower_bound(mainChain.begin(), mainChain.end(), value);
			mainChain.insert(pos, value);
		}
	}
	if (!straggler.empty()) {
		std::vector<int>::iterator pos = std::lower_bound(mainChain.begin(), mainChain.end(), straggler[0]);
		mainChain.insert(pos, straggler[0]);
	}
	arr = mainChain;
}

void	PmergeMe::fordJohnsonSortDeque( std::deque<int>& numbers ) {
	if (numbers.size() <= 1)
		return ;
	std::deque<std::pair<int, int> > pairs;
	std::deque<int> straggler;
	for (std::size_t i = 0; i + 1 < numbers.size(); i += 2)
	{
		if (numbers[i] > numbers[i + 1])
			pairs.push_back(std::make_pair(numbers[i], numbers[i + 1]));
		else
			pairs.push_back(std::make_pair(numbers[i + 1], numbers[i]));
	}
	if (numbers.size() % 2 != 0)
		straggler.push_back(numbers[numbers.size() - 1]);
	std::deque<int> winners;
	for (std::size_t i = 0; i < pairs.size(); i++)
		winners.push_back(pairs[i].first);
	fordJohnsonSortDeque(winners);
	std::deque<int> pend;
	std::deque<bool> used(pairs.size(), false);
	for (size_t i = 0; i < winners.size(); i++) {
		for (size_t j = 0; j < pairs.size(); j++) {
			if (!used[j] && (winners[i] == pairs[j].first)) {
				pend.push_back(pairs[j].second);
				used[j] = false;
				break ;
			}
		}
	}
	std::deque<int> mainChain = winners;
	mainChain.insert(std::lower_bound(mainChain.begin(), mainChain.end(), pend[0]), pend[0]);
	std::vector<std::size_t> jacobsthal = generateJacobsthal(pend.size());
	std::deque<bool> insertedV(pend.size(), false);
	insertedV[0] = true;
	for (std::size_t i = 2; i < jacobsthal.size(); i++)
	{
		std::size_t index = jacobsthal[i];
		if (index > pend.size())
			index = pend.size();
		for (std::size_t j = index; j > 0; j--) {
			if (j - 1 < pend.size() && !insertedV[j - 1]) {
				int value = pend[j - 1];
				std::deque<int>::iterator it = std::lower_bound(mainChain.begin(), mainChain.end(), value);
				mainChain.insert(it, value);
				insertedV[j - 1] = true;
			}
		}
	}
	for (std::size_t i = 0; i < pend.size(); i++)
	{
		if (!insertedV[i]) {
			int value = pend[i];
			std::deque<int>::iterator it = std::lower_bound(mainChain.begin(), mainChain.end(), value);
			mainChain.insert(it, value);
		}
	}
	if (!straggler.empty()) {
		std::deque<int>::iterator it = std::lower_bound(mainChain.begin(), mainChain.end(), straggler[0]);
		mainChain.insert(it, straggler[0]);
	}
	numbers = mainChain;
}

void	PmergeMe::startSortingVector(std::vector<std::string>& values) {
	std::vector<int> numbers;
	for (std::size_t i = 0; i < values.size(); i++) {
		numbers.push_back(std::atoi(values[i].c_str()));
	}
	clock_t startTime = std::clock();
	this->fordJohnsonSortVector(numbers);
	clock_t endTime = std::clock();
	this->durationVector = (double)(endTime - startTime) / CLOCKS_PER_SEC;
	this->sortedNumbersVector = numbers;
}

void	PmergeMe::startSortingDeque(std::vector<std::string>& values) {
	std::deque<int> numbers;
	for (std::size_t i = 0; i < values.size(); i++) {
		numbers.push_back(std::atoi(values[i].c_str()));
	}
	clock_t startTime = std::clock();
	this->fordJohnsonSortDeque(numbers);
	clock_t endTime = std::clock();
	this->durationDeque = (double)(endTime - startTime) / CLOCKS_PER_SEC;
	this->sortedNumbersDeque = numbers;
}

void	PmergeMe::parceInput( void ) {
	if (!checkInput(this->input))
		return;
	if (!ft_atoi(this->input))
		return;
	std::vector<std::string> values;
	std::stringstream ss(this->input);
	std::string temp;
	while (ss >> temp) {
		values.push_back(temp);
	}
	// using vector to sort
	this->startSortingVector(values);
	// using deque to sort
	this->startSortingDeque(values);
	this->printOutput();
}