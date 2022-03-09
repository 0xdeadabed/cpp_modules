/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : Cat
 * @created     : Tuesday Mar 08, 2022 19:04:11 CET
 */

#include "Cat.hpp"

Cat::Cat() {
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "[Cat] default constructor" << std::endl; 
}

Cat::Cat(const Cat &other) {
	*this = other;
	this->brain = new Brain();
	std::cout << "[Cat] copy constructor" << std::endl;
}

Cat::~Cat() {
	delete this->brain;
	std::cout << "[Cat] deconstructor" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
	this->Animal::operator=(other);
	*this->brain = *other.brain;
	std::cout << "[Cat] assignment operator" << std::endl;
	return *this;
}

void Cat::makeSound() const {
	std::cout<< "[Cat] miauw, miauw." << std::endl;
}

Brain *Cat::getBrain() const {
	return this->brain;
}
