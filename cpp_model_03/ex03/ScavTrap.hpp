#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
public:
	ScavTrap( void );
	ScavTrap( std::string initName );
	ScavTrap( const ScavTrap& other );

	void guardGate( void );

	~ScavTrap( void );
};


#endif