#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <exception>
#include <map>

class BitcoinExchange
{
private:
	std::string fileName;
	std::map<std::string, std::string> map;

public:
	BitcoinExchange( std::string init );
	~BitcoinExchange( void );
	BitcoinExchange( const BitcoinExchange& other );
	BitcoinExchange& operator=( const BitcoinExchange& other );

	void	parceFile( void );
	void	StoreInMap( std::string date, std::string num );
	void	handleDataFile(std::string line, std::ifstream& openFile, size_t pos);
};



#endif