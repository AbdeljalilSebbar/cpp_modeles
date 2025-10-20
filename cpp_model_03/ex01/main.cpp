#include "ScavTrap.hpp"

int main() {
	ScavTrap Steven("Steven");
	ScavTrap Alix(Steven);

	Steven.attack("BLAH");
	Steven.guardGate();
	std::cout << std::endl;
	return 0;
}