#include "BitcoinExchange.hpp"

int main(int ac, char* avp[]) {
	if (ac != 2)
	{
		std::cerr << "Error: Bad Usage !?" << std::endl;
		return -1;
	}
	std::string filename = avp[1];
	if (filename.empty())
	{
		std::cerr << "Not Valid File!" << std::endl;
		return -1;
	}
	std::ifstream readFile(filename);
	if (readFile.is_open())
	{
		BitcoinExchange bit(filename);
		try {
			bit.parceFile();
		}catch( std::exception& e ){
			std::cout << "ERROR: " << e.what() << std::endl;
		}
	}
	else
	{
		std::cerr << "FILE: " << filename << " Can't Be Open!" << std::endl;
	}
	return 0;
}
