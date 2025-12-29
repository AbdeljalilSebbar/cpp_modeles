#ifndef OUTCLASS_HPP
#define OUTCLASS_HPP

#include <iostream>
#include <string>

class outClass
{
private:
	std::string dataValid;
	std::string value;
	std::string valueAsBtc;
	std::string errMsg;
	bool outputStatus;
public:
	outClass( std::string data, std::string val, std::string btc, bool output, std::string msg );
	~outClass( void );
};

#endif