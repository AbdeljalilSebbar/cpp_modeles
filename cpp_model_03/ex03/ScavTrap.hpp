#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
    unsigned int oreEnergy;
public:
    ScavTrap( void );
    ScavTrap( const ScavTrap& other );
    ScavTrap( std::string initName );

    void guardGate( void );
    unsigned int getOreEnergy( void ) const;
    ScavTrap& operator=( const ScavTrap& other );
	void attack( const std::string &target );

    ~ScavTrap( void );
};

#endif