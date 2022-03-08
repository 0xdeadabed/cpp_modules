/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : Dog
 * @created     : Tuesday Mar 08, 2022 18:57:23 CET
 */

#include "Dog.hpp"

Dog::Dog()
{
   this->type = "Dog";

   std::cout << "[Dog] default constructor"<< std::endl;
}

Dog::Dog(const Dog &other)
{
	*this = other;

	std::cout << "[Dog] copy constructor" << std::endl;
}

Dog::~Dog()
{
	std::cout << "[Dog] deconstructor" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "wuff, wuff, wau, wau." << std::endl;
}
