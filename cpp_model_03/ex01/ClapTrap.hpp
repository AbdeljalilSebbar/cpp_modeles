#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

#define GREEN "\033[32m"
#define RESET "\033[0m"
#define RED "\033[31m"

class ClapTrap
{
protected:
	std::string name;
	unsigned int hit_Points;
	unsigned int energy_Points;
	unsigned int attack_Damage;

public:
	ClapTrap(void);
	ClapTrap(const ClapTrap &other);
	ClapTrap(std::string initName);

	virtual void attack(const std::string &target); // for polymorphisem
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	ClapTrap &operator=(const ClapTrap &other);

	~ClapTrap(void);
};

#endif