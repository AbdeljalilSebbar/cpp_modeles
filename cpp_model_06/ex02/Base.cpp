#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate( void ) {
    std::srand(std::time(NULL));

    int options[3] = {1, 2, 3};
    int choice = options[std::rand() % 3];
    try
    {
        if (choice == 1)
            return new A();
        else if (choice == 2)
            return new B();
        else if (choice == 3)
            return new C();
        return NULL;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void identify(Base* p) {
    try
    {
        if (dynamic_cast<A*>(p))
            std::cout << "A" << std::endl;
        else if (dynamic_cast<B*>(p))
            std::cout << "B" << std::endl;
        else if (dynamic_cast<B*>(p))
            std::cout << "C" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void identify(Base& p) {
    try
    {
        if (dynamic_cast<A*>(&p))
            std::cout << "A" << std::endl;
        else if (dynamic_cast<B*>(&p))
            std::cout << "B" << std::endl;
        else if (dynamic_cast<B*>(&p))
            std::cout << "C" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}
