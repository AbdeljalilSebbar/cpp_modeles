#include "Zombie.hpp"

int main()
{
    int sizeOfZombie = 5;
    std::string zombieName = "abdess";

    Zombie *z = zombieHorde(sizeOfZombie, zombieName);
    if (!z)
        return -1;
    for (int i = 0; i < 5; i++)
    {
        z[i].announce();
    }
    
    delete[] z;
    return 0;
}
