#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap( void );
    ScavTrap( const ScavTrap& other );
    ScavTrap( std::string initName );

    void guardGate( void );
    ScavTrap& operator=( const ScavTrap& other );
	void attack( const std::string &target );

    ~ScavTrap( void );
};

#endif