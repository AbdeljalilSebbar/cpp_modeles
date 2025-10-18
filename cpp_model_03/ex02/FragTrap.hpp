#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap( void );
	FragTrap( const FragTrap& other );
	FragTrap( std::string initName );

	void highFivesGuys( void );
	FragTrap& operator=( const FragTrap& other );

	~FragTrap( void );
};

#endif