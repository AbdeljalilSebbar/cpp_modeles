#ifndef	ARRAY_HPP
#define	ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
private:
	T* elemArray;
	unsigned int _size;
public:
    Array( void );
    Array( unsigned int n );
    Array( const Array& other );
    Array& operator=( const Array& other );
	T& operator[]( int index );
	unsigned int size( void ) const ;
	~Array( void );

	class badSizeOfArray: public std::exception {
		const char* what() const throw();
	};
	class badIndex: public std::exception {
		const char* what() const throw();
	};
};

#endif