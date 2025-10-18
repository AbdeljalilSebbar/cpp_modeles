#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:
    ScavTrap( void );
    ScavTrap( std::string initName );

    void guardGate( void );

    ~ScavTrap( void );
};


#endif