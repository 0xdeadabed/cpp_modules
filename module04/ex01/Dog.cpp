/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : Dog
 * @created     : Tuesday Mar 08, 2022 18:57:23 CET
 */

#include "Dog.hpp"

Dog::Dog() {
   this->type = "Dog";
   this->brain = new Brain();
   std::cout << "[Dog] default constructor"<< std::endl;
}

Dog::Dog(const Dog &other) {
	*this = other;
	this->brain= new Brain();
	std::cout << "[Dog] copy constructor" << std::endl;
}

Dog::~Dog() {
	delete this->brain;
	std::cout << "[Dog] deconstructor" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
	this->Animal::operator=(other);
	*this->brain = *other.brain;
	std::cout << "[Dog] assignment operator" << std::endl;
	return *this;
}

Brain *Dog::getBrain() const {
	return this->brain;
}

void Dog::makeSound() const {
	std::cout << "[Dofg] wuff, wuff, wau, wau." << std::endl;
}
