#include "ClapTrap.hpp"

int main(void) {
	ClapTrap clap("Truvor");
	ClapTrap clapT("Gero");

	clap.attack("Gero");
	clapT.takeDamage(8);
	clap.beRepaired(3);
	clapT.attack("Truvor");
	clap.takeDamage(5);

	std::cout << "“He fought not for glory, nor for victory, but against the shadows whispering in his mind.\
When the madness finally claimed him, even the gears wept.”" << std::endl;
}
