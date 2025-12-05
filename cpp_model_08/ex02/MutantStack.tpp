#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack( void ):
	std::stack<T>()
{
	std::cout << "Default Constructor Called!" << std::endl;
}

template <typename T>
MutantStack<T>::~MutantStack( void )
{
	std::cout << "Destructor Called!" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack( const MutantStack& other ):
	std::stack<T>(other)
{
	std::cout << "Copy Assignment Constructor Called!" << std::endl;
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=( const MutantStack& other ) {
	if (this != &other) {
		std::stack<T>::operator=(other);
		std::cout << "Copy Assignment Operator Called!" << std::endl;
	}
	return *this;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin( void ) {
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end( void ) {
	return this->c.end();
}

