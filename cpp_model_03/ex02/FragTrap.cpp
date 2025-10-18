#include "FragTrap.hpp"

FragTrap::FragTrap( void ): ClapTrap() {
	this->hit_Points = 100;
	this->energy_Points = 100;
	this->attack_Damage = 30;
	std::cout << "FragTrap has Been Created!" << std::endl;
}

FragTrap::FragTrap( std::string initName ) : ClapTrap(initName) {
	this->hit_Points = 100;
	this->energy_Points = 100;
	this->attack_Damage = 30;

	std::cout << GREEN << "FragTrap " << this->name << " has Been Init His Members:" << RESET << std::endl;	
	std::cout << "For The Name: " << this->name << std::endl;
	std::cout << "For The Hit Points: " << this->hit_Points << std::endl;
	std::cout << "For The Energy_Points: " << this->energy_Points << std::endl;
	std::cout << "For The Attack_Damage: " << this->attack_Damage << std::endl;
	std::cout << std::endl;
}

FragTrap::FragTrap( const FragTrap& other ): ClapTrap(other) {
	*this = other;
	std::cout << "FragTrap Copy Assignment Constructor Called!" << std::endl;
}

void    FragTrap::highFivesGuys( void ) {
	std::cout << "FragTrap " << this->name << " Guys How Wants High-Fives?!" << std::endl;
}

FragTrap& FragTrap::operator=( const FragTrap& other ) {
	ClapTrap::operator=(other);
	std::cout << "FragTrap Copy Assignment Operator Called!" << std::endl;
	return *this;
}

FragTrap::~FragTrap( void ) {
	std::cout << RED << "FragTrap " << this->name << " Destructor Called!!!" << RESET << std::endl;
}
