#include "harl.hpp"

void harl::debug( void )
{
	std::cout << "[DEBUG] I love having extra bacon for my 7XL-double-cheese-triple-\
pickle-special-ketchup burger. I really do!" << std::endl;
}

void harl::info( void )
{
	std::cout << "[INFO] I cannot believe adding extra bacon costs more money. You didn’t \
put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void harl::warning( void )
{
	std::cout << "[WARNING] I think I deserve to have some extra bacon for free. I’ve been coming for \
years, whereas you started working here just last month." << std::endl;
}

void harl::error( void )
{
	std::cout << "[ERROR] This is unacceptable! I want to speak to the manager now." << std::endl;
}
