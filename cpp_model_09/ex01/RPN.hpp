#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>

class RPN
{
private:
	std::string inputVal;
	std::stack<int> calculate;
public:
	RPN( std::string init );
	RPN( const RPN& other );
	RPN& operator=( const RPN& other );
	~RPN( void );

	void	calculateRun();
	void	executeValue( std::string input, std::stack<int>& listCal);
};

#endif