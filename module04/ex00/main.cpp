/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : main
 * @created     : Tuesday Mar 08, 2022 14:41:38 CET
 */

#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	std::cout << "==========  GOOD  ANIMALS  ==========\n" << std::endl;

	Animal *animal = new Animal();
	Animal *dog = new Dog();
	Animal *cat = new Cat();

	std::cout << std::endl;

	std::cout << animal->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;

	std::cout << std::endl;

	animal->makeSound();
	dog->makeSound();
	cat->makeSound();

	std::cout << std::endl;

	delete animal;
	delete dog;
	delete cat;

	/**********************************************************/
}

