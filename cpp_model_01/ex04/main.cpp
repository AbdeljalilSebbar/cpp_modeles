#include "copyfile.hpp"

int main(int ac, char *av[]){
    if (ac != 4)
        return std::cout << "Not enough arguments: <filename> S1 S2" << std::endl, -1;

    copyFile file(av[1]);

    if (file.writeToFile(av[2], av[3]))
        return -1;
    return 0;
}
