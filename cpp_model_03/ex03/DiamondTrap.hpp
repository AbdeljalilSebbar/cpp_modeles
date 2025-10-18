#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
private:
	std::string name;
public:
	DiamondTrap( void );
	DiamondTrap( std::string initName );
	DiamondTrap( const DiamondTrap& other );

	void	whoAmI( void );

	DiamondTrap&	operator=( const DiamondTrap& other );

	~DiamondTrap();
};

#endif