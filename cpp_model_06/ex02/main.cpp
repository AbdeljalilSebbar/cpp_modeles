#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate( void ) {
	std::srand(std::time(NULL));

	int options[3] = {1, 2, 3};
	int choice = options[std::rand() % 3];
	Base* base = NULL;
	try
	{
		if (choice == 1)
			base = new A();
		else if (choice == 2)
			base = new B();
		else if (choice == 3)
			base = new C();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return base;
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Uknowing type!?" << std::endl;
}

void identify(Base& p) {
	if (dynamic_cast<A*>(&p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Uknowing type!?" << std::endl;
}

int	main(void)
{
	Base* p;
	Base* p1;

	p = generate();
	p1 = generate();

	std::cout << "The actual type of the object pointed to by p: 'A', 'B', or 'C': ";
	identify(p);
	std::cout << "The actual type of the object pointed to by p1: 'A', 'B', or 'C': ";
	identify(p1);
	std::cout << std::endl;

	std::cout << "he actual type of the object referenced by p: 'A', 'B', or 'C': ";
	identify(*p);
	std::cout << "he actual type of the object referenced by p1: 'A', 'B', or 'C': ";
	identify(*p1);
	std::cout << std::endl;

	delete p;
	delete p1;
	return (0);
}
