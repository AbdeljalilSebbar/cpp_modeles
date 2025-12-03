#include "MutantStack.hpp"
#include "MutantStack.tpp"

int main() {
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    std::cout << mstack.size() << std::endl;

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    return 0;
}