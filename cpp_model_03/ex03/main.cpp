#include "DiamondTrap.hpp"

int	main() {
	DiamondTrap	Nono("Nono");
	DiamondTrap	Fou(Nono);

	Nono.attack("Test");
	Fou.attack("NONO");
	Fou.whoAmI();

	return 0;
}