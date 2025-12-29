#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( std::string initFile, std::string initDb ):
	file(initFile),
	dbFormat(initDb)
{
	std::cout << "BTC Constructor Called!" << std::endl;
}

BitcoinExchange::~BitcoinExchange( void )
{
	std::cout << "Destructor Called!" << std::endl;
}

void	BitcoinExchange::parceFileInput( void ) {
	std::string line;
	std::string res[4];

	while (std::getline(this->file, line))
	{
		if (ft_handeLine(line, res)) { // true mean an ERROR:
			outClass* error = new out(NULL, NULL, NULL, true, res[0]);
			this->container.push_back(error);
		}
		else {
			outClass* out = new out(res[0], res[1], res[2], false, NULL);
			this->container.push_back(out);
		}
	}
}

bool	ft_handeLine(std::string& line, std::string* res) { // true mean an ERROR:
	if (line.length() < 14) {
		res[0] = "ERROR: Not Enough Argments[Year-Month-Day | Value]!";
		return true;
	}
	std::size_t pos = line.find(" |");
	if (pos == std::string::npos) {
		res[0] = "ERROR: not a valid argments";
		return true;
	}
	std::string data = line.substr(0, pos);
	std::string value = line.substr(pos + 3); // for parce the value skip 3 and if not num ERROR;
	if (parceData(data)) {
		res[0] = "Error: bad input => " + data;
		return true;
	}
}
bool	checkData(std::string& value) {
	for (std::size_t i = 0; i < value.length(); i++)
	{
		if (!std::isDigit(value[i])) {
			return true;
		}
	}
	return false;
}
bool	checkYear(std::string& value) {
	for (std::size_t i = 0; i < value.length(); i++)
	{
	}
	return false;
}
bool	parceData(std::string& data) {
	std::string Year;
	std::string Month;
	std::string Day;

	std::string arr[3];
	int i = 0;
	std::size_t pos;
	std::size_t index = 0;
	while ((pos = data.find("-", index)) != std::string::npos)
	{
		arr[i++] = data.substr(index, pos - index);
		index = pos + 1;
	}
	arr[i] = data.substr(index);
	Year = arr[0];
	Month = arr[1];
	Day = arr[2];
	if (Year.empty() || Month.empty() || Day.empty()) {
		return true;
	}
	if (checkData(Year) || checkData(Month) || checkData(Day)) {
		return true;
	}
	if (checkYear(Year) || checkMonth(Month) || checkDay(Day)) {
		return true;
	}
	return false;
}