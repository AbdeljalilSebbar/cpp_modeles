#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class	Weapon
{
	private:
		std::string type;
	public:
		std::string getType();
		void setType( std::string newtype );
		Weapon( std::string defType );
		~Weapon( void );
};

#endif