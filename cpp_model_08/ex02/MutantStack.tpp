#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack( void )
{
	std::cout << "Default Constructor Called!" << std::endl;
}

template <typename T>
MutantStack<T>::~MutantStack( void )
{
	std::cout << "Destructor Called!" << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack( const MutantStack& other ) {
	*this = other;
	std::cout << "Copy Assignment Constructor Called!" << std::endl;
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=( const MutantStack& other ) {
	if (this != &other) {
		this->newStack = other.newStack;
		std::cout << "Copy Assignment Operator Called!" << std::endl;
	}
	return *this;
}

template <typename T>
void	MutantStack<T>::push( T value ) {
	this->newStack.push(value);
}

template <typename T>
T	MutantStack<T>::top( void ) {
	return this->newStack.top();
}

template <typename T>
void	MutantStack<T>::pop( void ) {
	this->newStack.pop();
}

template <typename T>
unsigned int MutantStack<T>::size( void ) {
	return this->newStack.size();
}

