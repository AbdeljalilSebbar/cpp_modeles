#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon* tpB;
	public:
		void setWeapon( Weapon& tp );
		void attack( void );
		HumanB( std::string name ) : name(name) {};
		~HumanB( void );
};

#endif