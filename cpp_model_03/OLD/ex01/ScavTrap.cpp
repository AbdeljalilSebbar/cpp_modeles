#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) {}
ScavTrap::ScavTrap( std::string initName ):ClapTrap(initName) {
	ClapTrap::setHitPoints(100);
	ClapTrap::setEnergyPoints(50);
	ClapTrap::setAttackPoints(20);

	std::cout << "Constructor: ScavTrap " << ClapTrap::getName() << " Created!" << std::endl;
}

void ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap " << ClapTrap::getName() << "is now in Gate keeper mode." << std::endl;
}


ScavTrap::~ScavTrap( void )
{
	std::cout << "Destructor Called " << "ScavTrap " << ClapTrap::getName() << " Deleted!" << std::endl;
}
