#include "FragTrap.hpp"

int main( void ) {
	FragTrap frag("Bobby");

	frag.attack("enemy");
	frag.takeDamage(20);
	frag.beRepaired(15);

	frag.highFivesGuys();

	return 0;
}