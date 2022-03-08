/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : Cat
 * @created     : Tuesday Mar 08, 2022 19:04:11 CET
 */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "[Cat] default constructor" << std::endl; 
}

Cat::Cat(const Cat &other)
{
	*this = other;

	std::cout << "[Cat] copy constructor" << std::endl;
}

Cat::~Cat()
{
	std::cout << "[Cat] deconstructor" << std::endl;
}

void Cat::makeSound() const {
	std::cout<< "[Cat] miauw, miauw." << std::endl;
}

