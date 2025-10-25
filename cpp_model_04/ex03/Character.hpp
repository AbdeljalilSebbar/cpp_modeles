#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character: public ICharacter
{
protected:
	std::string	name;
	AMateria*	Inventory[4];

public:
	Character( void );
	Character( std::string name );
	Character( const Character& other );

	Character& operator=( const Character& other );

	virtual std::string const &getName( void ) const = 0;
	virtual void equip(AMateria *m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter &target) = 0;

	virtual ~Character();
};

#endif