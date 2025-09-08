#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie *zombie = new Zombie(name);
    if (!zombie)
    {
        std::cout << "Allocation of Zombie failed!" << std::endl;
        return NULL;
    }
    zombie->announce();
    return zombie;
}
