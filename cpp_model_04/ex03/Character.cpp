#include "Character.hpp"

Character::Character( void ) {
	for (int i = 0; i < 4; i++)
	{
		this->Inventory[i] = NULL;
		this->oldAddr[i] = NULL;
	}
	std::cout << "DEFAULT CONSTRUCTOR CHARACTER CALLED!!" << std::endl;
}

Character::Character( std::string name ): name(name){
	for (int i = 0; i < 4; i++)
	{
		this->Inventory[i] = NULL;
		this->oldAddr[i] = NULL;
	}
	std::cout << "CONSTRUCTOR CHARACTER CALLED!!" << std::endl;
}

Character::Character( const Character& other ) {
	*this = other;
	std::cout << "COPY ASSIGNMENT CONSTRUCTOR CHARACTER CALLED!!" << std::endl;
}

Character& Character::operator=( const Character& other ) {
	if (this != &other) {
		this->name = other.name;

		for (int i = 0; i < 4; i++) {
			if (this->Inventory[i])
				delete this->Inventory[i];
			this->Inventory[i] = NULL;
		}

		for (int i = 0; i < 4; i++) {
			if (other.Inventory[i])
				this->Inventory[i] = other.Inventory[i]->clone();
			else
				this->Inventory[i] = NULL;
		}
		std::cout << "COPY ASSIGNMENT OPERATOR CHARACTER CALLED!!" << std::endl;
	}
	return *this;
}

std::string	const& Character::getName( void ) const{
	return this->name;
}

void	Character::equip( AMateria *m ) {
	if (!m) {
		std::cout << "Can't Add NULL AMateria!" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->Inventory[i] == NULL) {
			this->Inventory[i] = m;
			std::cout << "Character " << this->name << " Add the AMateria " << m->getType() << " At Index: " << i << std::endl;
			return ;
		}
	}
	std::cout << "Can't Add AMateria " << m->getType() << " Because Character " << this->name << " Is Full!" << std::endl;
}

void Character::unequip( int idx ) {
	if (idx < 0 || idx > 4) {
		std::cout << "Index Not Found In Character AMateria!" << std::endl;
		return ;
	}
	this->oldAddr[idx] = this->Inventory[idx];
	std::cout << "Character unequip " << this->Inventory[idx]->getType() << " At Index : " << idx << std::endl;
	this->Inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
	if (idx < 0 || idx >= 4) {
		std::cout << "Can't use: index out of range!" << std::endl;
		return;
	}

	if (!this->Inventory[idx]) {
		std::cout << "Can't use: no Materia in this slot!" << std::endl;
		return;
	}

	this->Inventory[idx]->use(target);
}

Character::~Character( void ) {
	for (int i = 0; i < 4; i++) {
		delete this->Inventory[i];
		delete this->oldAddr[i];
	}
	std::cout << "DESTRUCTOR CHARACTER CALLED!" << std::endl;
}
