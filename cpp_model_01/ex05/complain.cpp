#include "harl.hpp"

void harl::complain( std::string level)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (harl::*findLevel[])() = {
		&harl::debug,
		&harl::info,
		&harl::warning,
		&harl::error,
	};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*findLevel[i])();
			return ;
		}
	}
}
