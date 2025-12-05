#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
public:
	MutantStack( void );
	MutantStack( const MutantStack& other );
	MutantStack& operator=( const MutantStack& other );
	~MutantStack( void );

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator	begin( void );
	iterator	end( void );
};

#endif