#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
public:
	FragTrap( void );
	FragTrap( std::string initName );
	FragTrap( const FragTrap& other);

	void highFivesGuys( void );

	~FragTrap( void );
};


#endif