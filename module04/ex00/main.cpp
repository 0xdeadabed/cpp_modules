/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : main
 * @created     : Tuesday Mar 08, 2022 14:41:38 CET
 */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
//#include "WrongAnimal.hpp"
int main() {

	std::cout << "Correct" << std::endl;
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

	std::cout << std::endl;

	std::cout << "Wrong" << std::endl;

	WrongAnimal *a1 = new WrongAnimal();
	WrongAnimal *c1 = new WrongCat();

	std::cout << std::endl;
	
	a1->makeSound();
	c1->makeSound();

	delete a1;
	delete c1;

}

