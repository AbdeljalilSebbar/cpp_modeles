#include "FragTrap.hpp"

int main() {
	FragTrap Steven("Steven");
	FragTrap Max(Steven);
	FragTrap Half;
	std::cout << std::endl;
	std::cout << "Testing Copy Assignment Operator:" << std::endl;
	Half = Max;
	std::cout << std::endl;

	Steven.attack("BLAH");
	Steven.highFivesGuys();
	Half.highFivesGuys();

	return 0;
}