#include "Array.hpp"

template <typename T>
const char* Array<T>::badSizeOfArray::what() const throw() {
	return "You enter unvalid size of array";
}

template <typename T>
const char* Array<T>::badIndex::what() const throw() {
	return "You enter unvalid Index(std::out_of_range)";
}

template <typename T>
Array<T>::Array( void ):
	elemArray(NULL), _size(0)
{
	std::cout << "Default Constructor Called!" << std::endl;
}

template <typename T>
Array<T>::Array( unsigned int n ) {
	if (n <= 0)
		throw Array::badSizeOfArray();
	try
	{
		this->elemArray = new T[n];
		for (size_t i = 0; i < n; i++)
			this->elemArray[i] = 0;
		this->_size = n;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "Constructor Called!" << std::endl;
}

template <typename T>
Array<T>::Array( const Array& other ) {
	if (other._size > 0)
		this->elemArray = new T[other._size];
	*this = other;
	std::cout << "Copy Assignment Constructor Called" << std::endl;
}

template <typename T>
Array<T>& Array<T>::operator=( const Array& other ) {
	if (this != &other) {
		delete[] this->elemArray;
		this->elemArray = new T[other._size];
		this->_size = other._size;
		for (size_t i = 0; i < _size; i++)
		{
			this->elemArray[i] = other.elemArray[i];
		}
		std::cout << "Copy Assignment Operator Called" << std::endl;
	}
	return *this;
}

template <typename T>
T& Array<T>::operator[]( int idx ) {
	if (idx < 0 || (unsigned int)idx >= this->_size)
		throw Array::badIndex();
	return this->elemArray[idx];
}

template <typename T>
unsigned int Array<T>::size( void ) const {
	return this->_size;
}

template <typename T>
Array<T>::~Array( void ) {
	delete[] this->elemArray;
	std::cout << "Destructor Called!" << std::endl;
}
