#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <sstream>
#include <algorithm>
#include <ctime>
#include <sys/time.h>
#include <utility>

class PmergeMe
{
	private:
		std::string input;
		std::vector<int> sortedNumbersVector;
		std::deque<int> sortedNumbersDeque;

		long long durationVector;
		long long durationDeque;
		void startSortingVector( std::vector<std::string>& values );
		void startSortingDeque( std::vector<std::string>& values );
		void fordJohnsonSortVector( std::vector<int>& arr );
		void fordJohnsonSortDeque( std::deque<int>& arr );

	public:
		PmergeMe( std::string init );
		PmergeMe( const PmergeMe& other );
		PmergeMe& operator=( const PmergeMe& other );
		~PmergeMe( void );

		void parceInput( void );
		void printOutput( void );
};

bool	checkInput( std::string str );
bool	ft_atoi( std::string str );

#endif