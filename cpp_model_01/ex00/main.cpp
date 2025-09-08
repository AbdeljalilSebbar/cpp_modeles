#include "Zombie.hpp"

int main()
{
    Zombie *z1;
    randomChump("foo");
    z1 = newZombie("FOO");
    if (!z1)
        return -1;
    delete z1;
    return 0;
}
