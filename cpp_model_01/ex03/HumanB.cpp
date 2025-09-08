#include "HumanB.hpp"

HumanB::~HumanB( void ) {}

void HumanB::setWeapon( Weapon& tp )
{
    this->tpB = &tp;
}

void HumanB::attack( void )
{
    if (tpB != nullptr)
        std::cout << name << " attacks with their " <<  tpB->getType() << std::endl;
}
