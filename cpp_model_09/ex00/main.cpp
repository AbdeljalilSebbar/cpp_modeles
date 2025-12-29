#include "BitcoinExchange.hpp"

int main(int ac, char *av[])
{
	if (ac != 2)
	{
		std::cerr << "Error: could not open file." << std::endl;
		return -1;
	}
	std::string fileName = av[1];
	if (fileName.empty())
	{
		std::cerr << "Not A Valid Input File!" << std::endl;
		return -2;
	}
	std::ifstream myReadFile(fileName);
	if (myReadFile.is_open())
	{
		std::ifstream dbFile("./data.csv");
		if (dbFile.is_open())
		{
			BitcoinExchange btc(myReadFile, dbFile);
			btc.parceFileInput();
		}
		else
		{
			std::cerr << "Can't Open The DataBase File: `data.csv`" << std::endl;
		}
		myReadFile.close();
	}
	else
	{
		std::cerr << "Can't Open The File: " << fileName << std::endl;
		return -3;
	}
	return 0;
}