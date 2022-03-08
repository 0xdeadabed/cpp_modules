/**
 * @author      : hypn0x (hypn0x@$HOSTNAME)
 * @file        : WrongAnimal
 * @created     : Monday Mar 07, 2022 23:49:26 UTC
 */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Animal") {
	std::cout << "[WrongAnimal] default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
	*this = other;

	std::cout << "[WrongAnimal] copy constructor" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
	this->type = other.type;

	std::cout << "[WrongAnimal] assignment operator" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "[WrongAnimal] deconstructor" << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout << "[WrongAnimal] sound" << std::endl;
}

const std::string &WrongAnimal::getType() const {
	return this->type;
}
