#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ): name("DefaultCT"), hit_Points(10), energy_Points(10), attack_Damage(0) {
	std::cout << "ClapTrap has Been Created!" << std::endl;
}

ClapTrap::ClapTrap( std::string initName ) :name(initName){
	this->hit_Points = 10;
	this->energy_Points = 10;
	this->attack_Damage = 0;
	std::cout << GREEN << "ClapTrap " << this->name << " has Been Init His Members:" << RESET<< std::endl;
	std::cout << "For The Name: " << this->name << std::endl;
	std::cout << "For The Hit Points: " << this->hit_Points << std::endl;
	std::cout << "For The Energy_Points: " << this->energy_Points << std::endl;
	std::cout << "For The Attack_Damage: " << this->attack_Damage << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& other ) {
	*this = other;
	std::cout << "ClapTrap Copy Assignment Constructor Called!" << std::endl;
}

void	ClapTrap::attack( const std::string& target ) {
	if (this->hit_Points <= 0 || this->energy_Points <= 0) {
		std::cout << "ClapTrap " << this->name << " Dead!!!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << " , causing " << this->attack_Damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	if (this->hit_Points <= 0 || this->energy_Points <= 0) {
		std::cout << "ClapTrap " << this->name << " Dead!!!" << std::endl;
		return ;
	}
	if (amount >= this->hit_Points)
		this->hit_Points = 0;
	else
		this->hit_Points -= amount;
	this->energy_Points--;
	std::cout << "ClapTrap " << this->name << " Take Damages Of " << amount << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount ) {
	if (this->hit_Points <= 0 || this->energy_Points <= 0) {
		std::cout << "ClapTrap " << this->name << " Dead!!!" << std::endl;
		return ;
	}
	this->energy_Points--;
	this->hit_Points += amount;
	std::cout << "ClapTrap " << this->name << " Repaired By " << amount << std::endl;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& other ) {
	this->name = other.name;
	this->hit_Points = other.hit_Points;
	this->energy_Points = other.energy_Points;
	this->attack_Damage = other.attack_Damage;
	std::cout << "ClapTrap Copy Assignment Operator Called!" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << RED << "ClapTrap " << this->name << " Destructor Called!!!" << RESET << std::endl;
}
