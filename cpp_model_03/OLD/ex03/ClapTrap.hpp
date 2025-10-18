#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>


class ClapTrap{
private:
	std::string		name;
	unsigned int 	hitPoints;
	unsigned int 	energyPoints;
	unsigned int 	attackPoints;
public:
	ClapTrap( void );
	ClapTrap( std::string initName );
	ClapTrap( const ClapTrap& other );

	//getters:
	std::string	getName( void )const;
	unsigned int getHitPoints( void )const;
	unsigned int getEnergyPoints( void )const;
	unsigned int getAttackPoints( void )const;

	//setters:
	void	setName( std::string setName );
	void	setHitPoints( unsigned int setHP );
	void	setEnergyPoints( unsigned int EP );
	void	setAttackPoints( unsigned int AP );

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	~ClapTrap( void );
};


#endif