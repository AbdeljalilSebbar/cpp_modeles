#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ): ClapTrap("DefaultDT_clap_name") {
	this->name = "DefaultDT";
	this->hit_Points = FragTrap::hit_Points;
	this->energy_Points = ScavTrap::getOreEnergy();
	this->attack_Damage = FragTrap::attack_Damage;
	std::cout << "DiamonedTrap Default Has Been Created!!" << std::endl;
}

DiamondTrap::DiamondTrap( std::string initName ):
	ClapTrap(initName + "_clap_name"),
	ScavTrap(initName),
	FragTrap(initName),
	name(initName)
{
	this->hit_Points = FragTrap::hit_Points;
	this->energy_Points = ScavTrap::getOreEnergy();
	this->attack_Damage = FragTrap::attack_Damage;

	std::cout << GREEN << "DiamondTrap " << this->name << " has Been Init His Members:" << RESET << std::endl;	
	std::cout << "For The Name: " << this->name << std::endl;
	std::cout << "For The Name In ClapTrap: " << ClapTrap::name << std::endl;
	std::cout << "For The Hit_Points: " << this->hit_Points << std::endl;
	std::cout << "For The Energy_Points: " << this->energy_Points << std::endl;
	std::cout << "For The Attack_Damage: " << this->attack_Damage << std::endl;
	std::cout << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap& other ): ClapTrap(other), ScavTrap(other), FragTrap(other) {
	*this = other;
	std::cout << "DiamondTrap Copy Assignment Constructor Called!" << std::endl;
}

void	DiamondTrap::whoAmI( void ) {
	std::cout << "I am " << this->name << " Diamond But My Name In ClapTrap Is " << ClapTrap::name << std::endl;
}

DiamondTrap& DiamondTrap::operator=( const DiamondTrap& other ) {
	if (this != &other) {
		ClapTrap::operator=(other);
		this->name = other.name;
		std::cout << "DiamondTrap Copy Assignment Operator Called!" << std::endl;
	}
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << RED << "DiamondTrap " << this->name << " Destructor Called!!!" << RESET << std::endl;
}
