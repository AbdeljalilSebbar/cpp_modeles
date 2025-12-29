#include "outClass.hpp"

outClass::outClass( std::string data, std::string val, std::string btc, bool output, std::string msg ):
	dataValid(data),
	value(val),
	valueAsBtc(btc),
	outputStatus(output),
	errMsg(msg)
{
	std::cout << "Param constructor called!" << std::endl;
}

outClass::~outClass( void )
{
	std::cout << "Destructor called!" << std::endl;
}
