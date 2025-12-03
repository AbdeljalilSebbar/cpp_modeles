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

	void	push( T value );
	T	top( void );
	void	pop( void );
	unsigned int	size( void );

	typedef typename std::stack<T>::iterator iterator;

	void	begin( void );
	void	end( void );
};

#endif