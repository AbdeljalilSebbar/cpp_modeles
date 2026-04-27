#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <sstream>
// #include <>

class PmergeMe
{
private:
	std::string input;
	std::vector<std::vector<int> > numbers;
	std::vector<std::vector<int> > mainChain;
	std::vector<std::vector<int> > pendChain;

public:
	PmergeMe( std::string init );
	PmergeMe( const PmergeMe& other );
	PmergeMe&	operator=( const PmergeMe& other );
	~PmergeMe();

	void	parceInput( void );
	void	startCreatePairs( std::vector<std::string>& values );
	void	mergeSortRecursion( void );
	void	handleInsertionProcess(std::vector<int>& pendChain);
	void	printOutput( void );
};

#endif