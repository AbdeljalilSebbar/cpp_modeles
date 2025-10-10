#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) {}

ClapTrap::ClapTrap( std::string initName ): name( initName ) {
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackPoints = 0;

	std::cout << "Constructor: ClapTrap " << this->name << " Created!" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& other ) {
	*this = other;
	std::cout << "copy constructor called!" << std::endl;
}

	//getters:
std::string ClapTrap::getName( void ) const{
	return this->name;
}

unsigned int ClapTrap::getHitPoints( void ) const{
	return this->hitPoints;
}

unsigned int ClapTrap::getEnergyPoints( void ) const{
	return this->energyPoints;
}

unsigned int ClapTrap::getAttackPoints( void ) const{
	return this->attackPoints;
}

	//setters:
void	ClapTrap::setName( std::string setName ) {
	this->name = setName;
}

void	ClapTrap::setHitPoints( unsigned int setHP ) {
	this->hitPoints = setHP;
}

void	ClapTrap::setEnergyPoints( unsigned int EP ) {
	this->energyPoints = EP;
}

void	ClapTrap::setAttackPoints( unsigned int AP ) {
	this->attackPoints = AP;
}

void	ClapTrap::attack( const std::string& target ) {
	if (this->hitPoints <= 0 || this->energyPoints <= 0) {
		std::cout << "ClapTrap " << this->name << "Dead!!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap "<< this->name << " attacks "<< target << ", causing " << this->attackPoints << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	if (this->hitPoints <= 0 || this->energyPoints <= 0) {
		std::cout << "ClapTrap " << this->name << "Dead!!" << std::endl;
		return ;
	}
	if (amount >= this->hitPoints) {
		this->hitPoints = 0;
	}
	this->hitPoints -= amount;
	this->energyPoints--;
	this->attackPoints = amount;
	std::cout << "ClapTrap " << this->name << " Take Damage " << amount << " The Hit Points Know Is: " << this->hitPoints << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	if (this->hitPoints <= 0 || this->energyPoints <= 0) {
		std::cout << "ClapTrap " << this->name << "Dead!!" << std::endl;
		return ;
	}
	this->hitPoints += amount;
	this->energyPoints--;
	std::cout << "ClapTrap " << this->name << " Repairs It Self " << this->hitPoints << std::endl;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "Destructor Called " << "ClapTrap " << this->name << " Deleted!" << std::endl;
}