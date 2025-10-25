#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	// const Animal *meta = new Animal();
	// const Animal *j = new Dog();
	// const Animal *i = new Cat();
	// std::cout << std::endl;

	// std::cout << "Type: " << j->getType() << " " << std::endl;
	// std::cout << "Type: " << i->getType() << " " << std::endl;
	// std::cout << std::endl;
	// i->makeSound(); // will output the cat sound!
	// j->makeSound(); // will output the dog sound!
	// meta->makeSound();
	// std::cout << std::endl;

	// delete meta;
	// delete j;
	// delete i;

	// std::cout << std::endl;
	// std::cout << "------- WrongAnimal -------" << std::endl;

	// const WrongAnimal *secondTest = new WrongCat();
	// std::cout << std::endl;

	// std::cout << "Type: " << secondTest->getType() << " " << std::endl;
	// secondTest->makeSound(); // will output the cat sound!
	// std::cout << std::endl;

	// delete secondTest;

	// std::cout << "------- Testing Arrays of Animals -------" << std::endl;

	// int sizeOfAnimal = 6;
	// const Animal* animalBrain[sizeOfAnimal];

	// for (int i = 0; i < sizeOfAnimal; i++) {
	// 	if (i < sizeOfAnimal / 2) {
	// 		animalBrain[i] = new Dog("Dog");
	// 	}
	// 	else {
	// 		animalBrain[i] = new Cat("Cat");
	// 	}
	// }

	// std::cout << std::endl;
	// for (int i = 0; i < sizeOfAnimal; i++) {
	// 	std::cout << animalBrain[i]->getType() << " ";
	// }

	// std::cout << std::endl;
	// std::cout << std::endl;
	// for (int i = 0; i < sizeOfAnimal; i++) {
	// 	delete animalBrain[i];
	// }

	std::cout << "------- Testing Animal Ideas (Dog)-------" << std::endl;

	Dog DogIdea;
	DogIdea.callBrain(0, "i want to eat");
	DogIdea.callBrain(50, "i want to sleep");
	DogIdea.getIdeasBrain();

	std::cout << "------- Testing Copy Operator Animal Ideas (Dog)-------" << std::endl;
	Dog newIdea;
	newIdea = DogIdea;
	newIdea.getIdeasBrain();

	std::cout << "------- Testing Animal Ideas (Cat)-------" << std::endl;

	Cat CatIdea;
	CatIdea.callBrain(0, "i am think to get kids");
	CatIdea.callBrain(50, "i want to sleep");
	CatIdea.getIdeasBrain();
	std::cout << "------- Testing Copy Operator Animal Ideas (Cat)-------" << std::endl;
	Cat newCat;
	newCat = CatIdea;
	newCat.getIdeasBrain();

	return 0;
}