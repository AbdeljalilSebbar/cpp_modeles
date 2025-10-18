#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) {}

DiamondTrap::DiamondTrap( std::string initName ):
	FragTrap(initName),
	ScavTrap(initName)
{
	this->name = initName;
	ClapTrap::setName(initName + "_clap_name");
	ClapTrap::setHitPoints(FragTrap::getHitPoints());
	ClapTrap::setEnergyPoints(ScavTrap::getEnergyPoints());
	ClapTrap::setAttackPoints(FragTrap::getAttackPoints());

	std::cout << "Constructor: DiamondTrap " << this->name << " Created!" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap& other ): ClapTrap(other), FragTrap(other), ScavTrap(other) {
	*this = other;
}

void DiamondTrap::whoAmI( void ) {
	std::cout << "DiamondTrap My Name is: " << this->name << " My ClapTrap Name Is: " << ClapTrap::getName() << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor Called " << "DiamondTrap " << this->name << " Deleted!" << std::endl;
}
