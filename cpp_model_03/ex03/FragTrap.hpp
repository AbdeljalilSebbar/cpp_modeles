#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap( void );
	FragTrap( const FragTrap& other );
	FragTrap( std::string initName );

	void highFivesGuys( void );
	FragTrap& operator=( const FragTrap& other );
    unsigned int getOreEnergy( void ) const;
	~FragTrap( void );
};

#endif