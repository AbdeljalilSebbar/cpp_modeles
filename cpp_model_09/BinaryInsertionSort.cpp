#include <iostream>

void	handleSort(int* arr, int size) {
	for (int i = 1; i < size; i++)
	{
		int key = arr[i];
		int j = i - 1;
		while (j >= 0&&arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
	
}

int main(int ac, char *avp[]) {
	int arr[5];
	int j = 0;
	for (int i = 1; i < ac; i++)
	{
		arr[j] = std::atoi(avp[i]);
		j++;
	}
	std::cout << "array before sorte using 'Binary Insertion Sort': ";
	for (int i = 0; i < 5; i++) {
		std::cout << arr[i];
	}
	std::cout << std::endl;
	handleSort(arr, 5);
	std::cout << "array after sorte using 'Binary Insertion Sort': ";
	for (int i = 0; i < 5; i++) {
		std::cout << arr[i];
	}
	std::cout << std::endl;
	return 0;
}

// #include "PmergeMe.hpp"

// PmergeMe::PmergeMe( std::string init )
// {
// 	this->input = init;
// }

// PmergeMe::PmergeMe( const PmergeMe& other ) {
// 	*this = other;
// }

// PmergeMe&	PmergeMe::operator=( const PmergeMe& other ) {
// 	if (this != &other) {
// 		this->input = other.input;
// 	}
// 	return *this;
// }

// PmergeMe::~PmergeMe( void )
// {}

// void	PmergeMe::printOutput( void ) {
// 	std::cout << "Before: " << this->input << std::endl;
// 	std::cout << "After: " << std::endl;
// }

// bool	ft_atoi( std::string str ) {
// 	unsigned long long res = 0;
// 	unsigned long long max = 2147483647;
	
// 	for (std::size_t i = 0; i < str.size(); i++)
// 	{
// 		if (str[i] != ' ' && str[i] != '\t')
// 		{
// 			res = res * 10 + (str[i] - '0');
// 			if (res > max)
// 			{
// 				std::cerr << "Error" << std::endl;
// 				return false;
// 			}
// 		}
// 		else
// 			res = 0;
// 	}
// 	return true;
// }

// bool	checkInput( std::string str ) {
// 	for (std::size_t i = 0; i < str.size(); i++)
// 	{
// 		if (!std::isdigit(str[i]) && str[i] != ' ' && str[i] != '\t')
// 		{
// 			std::cerr << "Error" << std::endl;
// 			return false;
// 		}
// 	}
// 	return true;
// }

// void	PmergeMe::mergeSortRecursion( void ) {
// 	if (this->numbers.size() == 1)
// 		return;
// 	std::vector<int> pairsA;
// 	std::vector<int> pairsB;
// 	pairsA = this->numbers.front();
// 	this->numbers.erase(this->numbers.begin());
// 	pairsB = this->numbers.front();
// 	this->numbers.erase(this->numbers.begin());
// 	if (pairsA[0] < pairsB[0])
// 	{
// 		std::vector<int> values;
// 		for (std::size_t i = 0; i < pairsB.size(); i++)
// 			values.push_back(pairsB[i]);
// 		for (std::size_t i = 0; i < pairsA.size(); i++)
// 			values.push_back(pairsA[i]);
// 		this->numbers.push_back(values);
// 	}
// 	else {
// 		std::vector<int> values;
// 		for (std::size_t i = 0; i < pairsA.size(); i++)
// 			values.push_back(pairsA[i]);
// 		for (std::size_t i = 0; i < pairsB.size(); i++)
// 			values.push_back(pairsB[i]);
// 		this->numbers.push_back(values);
// 	}
// 	return mergeSortRecursion();
// }

// void PmergeMe::handleInsertionProcess(std::vector<int>& vPend) {
// 	if (vPend.empty() || this->numbers.empty())
// 		return;
// 	std::vector<int>& currentNumbers = this->numbers[0];
// 	size_t pendHalf = vPend.size() / 2;
// 	size_t numHalf = currentNumbers.size() / 2;
// 	std::vector<int> firstHalfPend(vPend.begin(), vPend.begin() + pendHalf);
// 	std::vector<int> firstHalfNums(currentNumbers.begin(), currentNumbers.begin() + numHalf);
// 	this->mainChain.clear(); 
// 	this->mainChain.push_back(firstHalfPend);
// 	this->mainChain.push_back(firstHalfNums);
// 	std::vector<int> secondHalfPend(vPend.begin() + pendHalf, vPend.end());
// 	std::vector<int> secondHalfNums(currentNumbers.begin() + numHalf, currentNumbers.end());
// 	this->pendChain.clear();
// 	this->pendChain.push_back(secondHalfPend);
// 	this->pendChain.push_back(secondHalfNums);
// }

// std::vector<std::vector<int> >::iterator findMainPosi( std::vector<std::vector<int> >& main, const std::vector<int>& winnerBlock ) {
// 	for (std::vector<std::vector<int> >::iterator it = main.begin(); it != main.end(); ++it)
// 	{
// 		if ((*it)[0] == winnerBlock[0])
// 			return it;
// 	}
// 	return main.end();
// }

// bool compareBlocks(const std::vector<int>& left, const std::vector<int>& right) {
//     return left[0] < right[0];
// }

// std::vector<size_t> generateJacobsthal(size_t n) {
//     std::vector<size_t> j;
//     j.push_back(0);
//     j.push_back(1);
//     while (j.back() < n) {
//         j.push_back(j[j.size() - 1] + 2 * j[j.size() - 2]);
//     }
//     return j;
// }

// void	PmergeMe::sortWinners( void ) {
// 	if (pendChain.empty())
// 		return;
// 	std::vector<std::vector<int> > current = mainChain;
// 	mainChain.insert(mainChain.begin(), pendChain[0]);
// 	std::vector<size_t> jHash = generateJacobsthal(pendChain.size());
//     size_t lastInsertedIdx = 1;
//     for (size_t k = 3; k < jHash.size(); ++k) {
//         size_t currentJacob = jHash[k];
//         size_t targetIdx = (currentJacob < pendChain.size()) ? currentJacob : pendChain.size();
//         for (size_t i = targetIdx - 1; i >= lastInsertedIdx; --i) {
//             std::vector<int> bk = pendChain[i];
//             std::vector<std::vector<int> >::iterator limit = findMainPosi(mainChain, mainChain[i]);
//             std::vector<std::vector<int> >::iterator pos = 
//                 std::lower_bound(mainChain.begin(), limit, bk, compareBlocks);
//             mainChain.insert(pos, bk);
//             if (i == lastInsertedIdx)
// 				break ;
//         }
//         lastInsertedIdx = targetIdx;
//     }
// }

// void	PmergeMe::handleMainPendChain( void ) {
// 	std::size_t pendSize = this->pendChain[0].size();
// 	std::size_t mainSize = this->mainChain[0].size();
// 	std::vector<std::vector<int> > currentMain = this->mainChain;
// 	this->mainChain.clear();
// 	std::vector<int> tmp;
// 	for (std::size_t i = 0; i < this->pendChain.size(); i++)
// 	{
// 		for (std::size_t j = 0; j < pendSize / 2; j++)
// 		{
// 			if (j == 0)
// 				tmp.push_back(this->pendChain[i][j]);
// 			else
// 				tmp.push_back(this->pendChain[i][j - 1]);
// 			this->pendChain[i].erase(this->pendChain[i].begin());
// 		}
// 		mainChain.insert(mainChain.begin(), tmp);
// 		tmp.clear();
// 	}
// 	for (std::size_t i = 0; i < currentMain.size(); i++)
// 	{
// 		for (std::size_t j = 0; j < mainSize / 2; j++)
// 		{
// 			if (j == 0)
// 				tmp.push_back(currentMain[i][j]);
// 			else
// 				tmp.push_back(currentMain[i][j - 1]);
// 			currentMain[i].erase(currentMain[i].begin());
// 		}
// 		mainChain.push_back(tmp);
// 		tmp.clear();
// 	}
// 	std::swap(this->pendChain[0], this->pendChain[1]);

// 	for (std::size_t i = 0; i < currentMain.size(); i++)
// 	{
// 		for (std::size_t j = 0; j < currentMain[i].size(); j++)
// 		{
// 			tmp.push_back(currentMain[i][j]);
// 		}
// 		this->pendChain.push_back(tmp);
// 		tmp.clear();
// 	}
// 	this->sortWinners();
// 	this->pendChain.clear();
// 	for (std::size_t i = 0; i < this->mainChain.size(); i++)
// 	{
// 		if (this->mainChain[i].size() > 1)
// 		{
// 			for (std::size_t j = 1; j < this->mainChain[i].size(); j++)
// 			{
// 				int val = this->mainChain[i][j];
// 				std::vector<int> newVec;
// 				newVec.push_back(val);
// 				this->pendChain.push_back(newVec);
// 			}
// 			this->mainChain[i].erase(this->mainChain[i].begin() + 1, this->mainChain[i].end());
// 		}
// 	}
// 	this->sortWinners();
// 	for (std::size_t i = 0; i < this->mainChain.size(); i++){
// 		for (std::size_t j = 0; j < this->mainChain[i].size(); j++) {
// 			std::cout << this->mainChain[i][j] << std::endl;
// 		}
// 		std::cout << "-----------" << std::endl;
// 	}
// }

// void	PmergeMe::startCreatePairs( std::vector<std::string>& values ) {
// 	std::size_t i = 0;
// 	std::size_t flag = 0;
// 	std::vector<int> pairs;
// 	for (i = 0; i < values.size(); i++)
// 	{
// 		int val = std::atoi(values.at(i).c_str());
// 		pairs.push_back(val);
// 		if (pairs.size() == 2)
// 		{
// 			if (pairs[0] < pairs[1])
// 				std::swap(pairs[0], pairs[1]);
// 			this->numbers.push_back(pairs);
// 			pairs.clear();
// 			flag = i;
// 		}
// 	}
// 	values.erase(values.begin(), values.begin() + flag+1);
// 	this->mergeSortRecursion();
// 	pairs.clear();
// 	std::vector<int>& pairMain = this->numbers[0];
// 	std::vector<int>::iterator splitPoint = pairMain.begin() + (pairMain.size() / 2);
// 	pairs.insert(pairs.end(), splitPoint, pairMain.end());
// 	pairMain.erase(splitPoint, pairMain.end());
// 	handleInsertionProcess(pairs);
// 	handleMainPendChain();
// }

// void	PmergeMe::parceInput( void ) {
// 	if (!checkInput(this->input))
// 		return ;
// 	if (!ft_atoi(this->input))
// 		return ;

// 	std::vector<std::string> values;
// 	std::stringstream ss(this->input);
// 	std::string temp;
// 	while (ss >> temp) {
// 		values.push_back(temp);
// 	}
// 	this->startCreatePairs(values);
// }
