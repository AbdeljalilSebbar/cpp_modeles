#include "ScavTrap.hpp"

int main() {
	ScavTrap Steven("Steven");
	ScavTrap Alix(Steven);

	Steven.attack("BLAH");
	Steven.guardGate();
	return 0;
}