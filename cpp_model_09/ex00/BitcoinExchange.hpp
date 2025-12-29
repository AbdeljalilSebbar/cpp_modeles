#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <cctype>
#include "outClass.hpp"


class BitcoinExchange
{
private:
	std::vector<outClass *> container;
	std::string file;
	std::string dbFormat;
public:
	BitcoinExchange( std::string initFile, std::string initDb );
	void	parceFileInput( void );
	void	printResults( void );
	void	removeAllElements( void );
	~BitcoinExchange( void );
};


#endif