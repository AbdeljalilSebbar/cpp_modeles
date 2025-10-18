#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
private:
	std::string name;
	unsigned int hit_Points;
	unsigned int energy_Points;
	unsigned int attack_Damage;
public:
	ClapTrap( void );
	ClapTrap( const ClapTrap& other );
	ClapTrap( std::string initName );

	void	attack( const std::string& target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );

	ClapTrap& operator=( const ClapTrap& other );

	~ClapTrap( void );
};

#endif
