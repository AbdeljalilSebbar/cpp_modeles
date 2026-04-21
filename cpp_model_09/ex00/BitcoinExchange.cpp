#include "BitcoinExchange.hpp"

/***********

99999 => invalid input

************/

BitcoinExchange::BitcoinExchange( std::string init ):
	fileName(init)
{
	std::cout << "Constructor called!" << std::endl;
}

BitcoinExchange::~BitcoinExchange( void )
{
	std::cout << "Destructor called!" << std::endl;
}

BitcoinExchange::BitcoinExchange( const BitcoinExchange& other ) {
	*this = other;
}
BitcoinExchange& BitcoinExchange::operator=( const BitcoinExchange& other ) {
	if (this != &other) {
		this->fileName = other.fileName;
	}
	return *this;
}

std::string trimString(const std::string& str) {
    size_t first = str.find_first_not_of(" \t\r\n");
    if (first == std::string::npos) return "";
    size_t last = str.find_last_not_of(" \t\r\n");
    return str.substr(first, (last - first + 1));
}

void	split(std::string& date, std::string& num, char delemeter, std::string line) {
	int i = 0;
	int coutDele = 0;
	while (line[i])
	{
		if (line[i] == delemeter)
			coutDele++;
		i++;
	}
	if (coutDele > 1)
	{
		size_t pos = 0;
		date = line;
		num = "";
		return ;
	}
	size_t pos1 = 0;
	if ((pos1 = line.find(delemeter)) != std::string::npos) {
		date = trimString(line.substr(0, pos1));
	}
	num = trimString(line.substr(pos1 + 1));
}

void	BitcoinExchange::StoreInMap( std::string date, std::string num ) {
	
}


void	BitcoinExchange::handleDataFile(std::string line, std::ifstream& openFile, size_t pos) {
	int i = 0;
	while (std::getline(openFile, line, '\n'))
	{
		std::string num;
		std::string date;
		split(date, num, ',', line);
		this->map.insert(std::make_pair(date, num));
		if (i == 4)
			break;
		i++;
	}
	
}

void	BitcoinExchange::parceFile( void ) {
	if (fileName.empty())
		throw std::runtime_error("Invalid File");
	std::ifstream openFile(this->fileName);
	if (openFile.is_open())
	{
		std::string line;
		std::getline(openFile, line, '\n');
		size_t pos = 0;
		if ((pos = line.find(',')) != std::string::npos)
			this->handleDataFile(line, openFile, pos);
		else if (line.find('|') != std::string::npos)
			;// handleInputFile();
		else
			throw std::runtime_error("Invalid File " + this->fileName);
	}
	else
	{
		throw std::runtime_error("Couldn't Open file " + this->fileName);
	}
	
}