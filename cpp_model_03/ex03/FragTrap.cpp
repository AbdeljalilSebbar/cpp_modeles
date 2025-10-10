#include "FragTrap.hpp"

FragTrap::FragTrap( void ) {}

FragTrap::FragTrap( std::string initName ):ClapTrap(initName) {
	ClapTrap::setHitPoints(100);
	ClapTrap::setEnergyPoints(100);
	ClapTrap::setAttackPoints(30);

	std::cout << "Constructor: FragTrap " << ClapTrap::getName() << " Created!" << std::endl;
}

FragTrap::FragTrap( const FragTrap& other): ClapTrap(other) {
	*this = other;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << ClapTrap::getName() << " requests a positive high five✋!!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor Called " << "FragTrap " << ClapTrap::getName() << " Deleted!" << std::endl;
}