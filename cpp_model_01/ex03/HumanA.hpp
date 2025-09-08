#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon& tpA;
	public:
		void attack( void );
		HumanA(std::string name, Weapon& tp):name(name), tpA(tp) {};
		~HumanA( void );
};

#endif