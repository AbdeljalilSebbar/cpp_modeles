#include "ScavTrap.hpp"

int main(void) {
    ScavTrap scav("IronGuard");
    ScavTrap enemy("MadBot");

    scav.attack("MadBot");
    enemy.takeDamage(20);

    enemy.attack("IronGuard");
    scav.takeDamage(15);

    scav.beRepaired(10);

    scav.guardGate();

    std::cout << "The battle is over... but the gates remain guarded." << std::endl;

    return 0;
}
