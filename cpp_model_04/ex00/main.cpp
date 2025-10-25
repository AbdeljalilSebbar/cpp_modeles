#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << std::endl;

	std::cout << "Type: " << j->getType() << " " << std::endl;
	std::cout << "Type: " << i->getType() << " " << std::endl;
	std::cout << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound(); // will output the dog sound!
	meta->makeSound();
	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;

	std::cout << std::endl;
	std::cout << "------- WrongAnimal -------" << std::endl;

	const WrongAnimal *secondTest = new WrongCat();
	std::cout << std::endl;

	std::cout << "Type: " << secondTest->getType() << " " << std::endl;
	secondTest->makeSound(); // will output the cat sound!
	std::cout << std::endl;

	delete secondTest;
	return 0;
}