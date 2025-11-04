#include "Bureaucrat.hpp"

int main(){
    try
    {
        Bureaucrat bob("bob", 147);
        std::cout << bob << std::endl;
        std::cout << "-------------------------------------" << std::endl;
        bob.incrementGrade(); // Grade=4
        std::cout << bob << std::endl;
        std::cout << "-------------------------------------" << std::endl;
        bob.incrementGrade(); // Grade=3
        std::cout << bob << std::endl;
        std::cout << "-------------------------------------" << std::endl;
        bob.incrementGrade(); // Grade=2
        std::cout << bob << std::endl;
        std::cout << "-------------------------------------" << std::endl;
        bob.incrementGrade(); // Grade=1
        std::cout << bob << std::endl;
        std::cout << "-------------------------------------" << std::endl;
        bob.incrementGrade(); // Grade=0
        std::cout << bob << std::endl;
        std::cout << "-------------------------------------" << std::endl;
        bob.incrementGrade(); // Grade=-1
        std::cout << bob << std::endl;
        std::cout << "-------------------------------------" << std::endl;
        bob.incrementGrade(); // Grade=-2
        std::cout << bob << std::endl;
        std::cout << "-------------------------------------" << std::endl;
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}