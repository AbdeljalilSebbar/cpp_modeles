#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

/*

A pure virtual function is a way to ensure that all related classes must
  have a specific function, but each can do it in its unique way. For example:
  in a zoo, every animal can make a sound, but the sound differs: a dog barks,
  a cat meows, and a bird chirps. We create a rule in the base class (like "Animal")
  that says, "Every animal must know how to make a sound." This rule is the pure virtual function.
It ensures that any new animal added, like an elephant or a lion, must have its own way of making
  a sound, keeping everything organized and consistent.

*/

int main() {
    //Animal a;

    Dog d;
    Cat c;

    std::cout << std::endl;
    d.makeSound();
    c.makeSound();

    std::cout << std::endl;
    Animal* animal = new Dog();

    std::cout << std::endl;
    animal->makeSound();

    std::cout << std::endl;
    delete animal;

    return 0;
}
