#include "DiamondTrap.hpp"

int main() {
    DiamondTrap Hybrid("Riks");

    Hybrid.whoAmI();
    Hybrid.attack("Hassan");
    Hybrid.highFivesGuys();
    Hybrid.guardGate();

    std::cout << std::endl;

    std::cout << "Testing copy constructor:" << std::endl;
    DiamondTrap copyHybrid(Hybrid);
    copyHybrid.whoAmI();

    std::cout << std::endl;

    std::cout << "Testing copy assignment operator:" << std::endl;
    DiamondTrap assignedHybrid("Temp");
    assignedHybrid = Hybrid;
    assignedHybrid.whoAmI();

    std::cout << std::endl;

    std::cout << "Testing self-assignment:" << std::endl;
    assignedHybrid = assignedHybrid;
    assignedHybrid.whoAmI();

    std::cout << std::endl;

    return 0;
}