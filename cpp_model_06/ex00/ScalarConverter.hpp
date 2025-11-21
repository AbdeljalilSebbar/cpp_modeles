#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>
#include <string>

enum Type{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
};

class ScalarConverter
{
private:

public:
	ScalarConverter( void );
	ScalarConverter( const ScalarConverter& other );
	ScalarConverter& operator=( const ScalarConverter& other );
	static void	convert( std::string& value );

	~ScalarConverter( void );
};


#endif