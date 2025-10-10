#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
private:
	std::string name;
public:
	DiamondTrap( void );
	DiamondTrap( std::string initName );
	DiamondTrap( const DiamondTrap& other );

	void whoAmI( void );

	~DiamondTrap( void );
};


#endif