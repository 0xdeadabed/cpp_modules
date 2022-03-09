/**
 * @author      : hypn0x (hypn0x@$HOSTNAME)
 * @file        : Animal
 * @created     : Monday Mar 07, 2022 23:49:26 UTC
 */

#include "Animal.hpp"

Animal::Animal() : type("Animal") {
	std::cout << "[Animal] default constructor" << std::endl;
}

Animal::Animal(const Animal &other) {
	*this = other;

	std::cout << "[Animal] copy constructor" << std::endl;
}

Animal &Animal::operator=(const Animal &other) {
	this->type = other.type;

	std::cout << "[Animal] assignment operator" << std::endl;
	return *this;
}

Animal::~Animal() {
	std::cout << "[Animal] deconstructor" << std::endl;
}

void Animal::makeSound() const {
	std::cout << "[Animal] sound" << std::endl;
}

const std::string &Animal::getType() const {
	return this->type;
}
