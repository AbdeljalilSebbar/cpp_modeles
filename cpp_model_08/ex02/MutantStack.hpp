#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <exception>
#include <stack>

template <typename T>
class MutantStack
{
private:
	std::stack<T>	newStack;
public:
	MutantStack( void );
	MutantStack( const MutantStack& other );
	// MutantStack(  );
	MutantStack& operator=( const MutantStack& other );
	~MutantStack( void );

	
};

#endif