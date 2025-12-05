#include "MutantStack.hpp"
#include "MutantStack.tpp"

int main() {

//**********************************************************/
//														    /
//				TEST STACK => STD::STACK<T>					/
//															/
//**********************************************************/

	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << "top element: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size of stack: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	std::cout << "size of stack: " <<  mstack.size() << std::endl;

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::stack<int> s(mstack);

//**********************************************************/
//														    /
//				TEST LIST => STD::LIST<T>					/
//															/
//**********************************************************/

	

	return 0;
}
