#include "ClapTrap.hpp"

int main() {
	ClapTrap Travor("Travor");
	ClapTrap Pop("Pop");
	ClapTrap Tem("Tem");
	Tem = Pop;

	Travor.attack("Pop");
	Pop.takeDamage(5);
	Travor.attack("Pop");
	Pop.takeDamage(2);
	Pop.beRepaired(100);
	Pop.attack("Travor");
	Travor.takeDamage(50);
	Pop.attack("Travor");
	Travor.attack("Pop");
	Tem.attack("Pop");

	return 0;
}