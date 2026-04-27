#include "BitcoinExchange.hpp"

/***********

99999 => invalid input

************/

BitcoinExchange::BitcoinExchange( std::string init ):
	fileName(init)
{
	// std::cout << "Constructor called!" << std::endl;
}

BitcoinExchange::~BitcoinExchange( void )
{
	// std::cout << "Destructor called!" << std::endl;
}

BitcoinExchange::BitcoinExchange( const BitcoinExchange& other ) {
	*this = other;
}
BitcoinExchange& BitcoinExchange::operator=( const BitcoinExchange& other ) {
	if (this != &other) {
		this->fileName = other.fileName;
		this->map = other.map;
	}
	return *this;
}

std::string trimString(const std::string& str) {
    size_t first = str.find_first_not_of(" \t\r\n");
    if (first == std::string::npos) return "";
    size_t last = str.find_last_not_of(" \t\r\n");
    return str.substr(first, (last - first + 1));
}

int	checkDate( std::string date ) {
	if (date.empty())
		return 1;
	int i = 0;
	while (date[i])
	{
		if (!std::isdigit(date[i]) && date[i]!='-')
			return 1;
		i++;
	}
	return 0;
}

int	checkNum( std::string num ) {
	if (num.empty())
		return 1;
	int i = 0;
	while (num[i])
	{
		if (!std::isdigit(num[i]) && num[i] != '.' && num[i] != '-')
			return 1;
		i++;
	}
	return 0;
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
	if (coutDele != 1)
	{
		date = line.substr(0);
		num = "";
		return ;
	}
	size_t pos1 = 0;
	if ((pos1 = line.find(delemeter)) != std::string::npos) {
		date = trimString(line.substr(0, pos1));
		if (date.find(' ') != std::string::npos || checkDate(date) || date.size() != 10)
		{
			if (date.empty())
				date = line;
			num = "";
			return ;
		}
	}
	num = trimString(line.substr(pos1 + 1));
	if (num.find(' ') != std::string::npos || checkNum(num))
	{
		num = "";
		return ;
	}
}

void	BitcoinExchange::handleDataFile(std::string line, std::ifstream& openFile) {
	while (std::getline(openFile, line, '\n'))
	{
		std::string num = "";
		std::string date = "";
		split(date, num, ',', line);
		if (date.empty() || num.empty())
			continue ;
		this->map.insert(std::make_pair(date, num));
	}
}

bool	ValidDate(std::string date) {
	if (date.size() != 10 || date[4] != '-' || date[7] != '-')
		return false;

	int year = std::atoi(date.substr(0, 4).c_str());
	int month = std::atoi(date.substr(5, 2).c_str());
	int day = std::atoi(date.substr(8, 2).c_str());
	if (month < 1 || month > 12 || day < 1)
		return false;

	int monthsYear[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		monthsYear[1] = 29;
	if (day > monthsYear[month - 1])
		return false;
	return true;
}

void	BitcoinExchange::handleInputFile(std::ifstream& openFile, std::string line) {
	while (std::getline(openFile, line)) {
		if (line.empty())
			continue ;
		std::string date;
		std::string value;
		split(date, value, '|', line);
		if (!ValidDate(date))
		{
			std::cout << "Error: bad input2 => " << date << std::endl;
			continue ;
		}
		if (value.empty())
		{
			std::cout << "Error: bad input1 => " << line << std::endl;
			continue ;
		}
		char* end;
		double lastValue = std::strtod(value.c_str(), &end);
		if (*end != '\0' && !isspace(*end))
		{
			std::cout << "Error: bad input3 => " << line << std::endl;
			continue ;
		}
		if (lastValue < 0)
		{
			std::cout << "Error: not a positive number." << std::endl;
            continue;
		}
		if (lastValue > 1000)
		{
			std::cout << "Error: too large a number." << std::endl;
            continue;
		}
		std::map<std::string, std::string>::iterator it = this->map.lower_bound(date);
		if (it == this->map.end() || (it->first != date && it != this->map.begin()))
			if (it->first != date)
				--it;
		if (it != this->map.end() && (it->first <= date)) {
			std::cout << date << " => " << lastValue << " = " << (lastValue * std::atof(it->second.c_str())) << std::endl;
		} else {
			std::cout << "Error: date predates database." << std::endl;
		}
	}
}

void	BitcoinExchange::parceFile( void ) {
	if (fileName.empty())
		throw std::runtime_error("Invalid File");
	std::string line;
	std::ifstream dbFile("data.csv");
	if (dbFile.is_open())
	{
		std::getline(dbFile, line, '\n');
		if ((line.find(',')) != std::string::npos)
			this->handleDataFile(line, dbFile);
	}
	else
		throw std::runtime_error("Couldn't Open file data.csv");
	std::ifstream openFile(this->fileName);
	if (openFile.is_open())
	{
		std::getline(openFile, line, '\n');
		if (line.find('|') != std::string::npos)
			this->handleInputFile(openFile, line);
	}
	else
		throw std::runtime_error("Couldn't Open file " + this->fileName);
}
