#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ): ClapTrap() {
	this->hit_Points = 100;
	this->energy_Points = 50;
	this->attack_Damage = 20;
	this->oreEnergy = 50;

	std::cout << "ScavTrap Default has been created!" << std::endl;
}

ScavTrap::ScavTrap( std::string initName ) : ClapTrap(initName) {
	this->hit_Points = 100;
	this->energy_Points = 50;
	this->attack_Damage = 20;
	this->oreEnergy = 50;

	std::cout << GREEN << "ScavTrap " << this->name << " has Been Init His Members:" << RESET << std::endl;	
	std::cout << "For The Name: " << this->name << std::endl;
	std::cout << "For The Hit_Points: " << this->hit_Points << std::endl;
	std::cout << "For The Energy_Points: " << this->energy_Points << std::endl;
	std::cout << "For The Attack_Damage: " << this->attack_Damage << std::endl;
	std::cout << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& other ): ClapTrap(other) {
	*this = other;
	std::cout << "ScavTrap Copy Assignment Constructor Called!" << std::endl;
}

unsigned int ScavTrap::getOreEnergy(void) const{
	return this->oreEnergy;
}

void	ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode." << std::endl;
}

void	ScavTrap::attack( const std::string& target) {
	std::cout << "ScavTrap " << this->name << " Attack The Enemy " << target << " by " << this->attack_Damage << std::endl;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& other ) {
	ClapTrap::operator=(other);
	std::cout << "ScavTrap Copy Assignment Operator Called!" << std::endl;
	return *this;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << RED << "ScavTrap " << this->name << " Destructor Called!!!" << RESET << std::endl;
}
