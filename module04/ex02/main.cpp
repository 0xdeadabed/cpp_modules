/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : main
 * @created     : Wednesday Mar 09, 2022 09:58:46 CET
 */

#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	// Abstract animal class is KO,
	// protected constructor can't be called
	//Animal *a = new Animal();
	//delete a;

	//
	Dog *d = new Dog();
	
	d->getBrain()->ideas[0] = "Wuuf";
	d->getBrain()->ideas[1] = "Wuuf, wuuf";
	d->getBrain()->ideas[2] = "Wuuf, wuuf, wuuf";
	
	std::cout << std::endl;

	std::cout << "Dog ideas" << std::endl;
	for (int i = 0; i < 3; i++) {
		std::cout << i << ": " << d->getBrain()->ideas[i] << std::endl;
	}

	std::cout << std::endl;
	delete d;
	std::cout << std::endl;

	std::cout << "Array of animals" << std::endl;
	int nAnimal = 10;
	Animal *animals[10];

	for (int i = 0; i < nAnimal; i++){
		if (i < nAnimal/2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}

	std::cout << std::endl;
	for (int i = 0; i < nAnimal;i++)
		animals[i]->makeSound();

	std::cout << std::endl;

	for (int i = 0; i < nAnimal; i++)
		delete animals[i];
    
	return 0;
}

