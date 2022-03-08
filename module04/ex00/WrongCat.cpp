/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : WrongCat
 * @created     : Tuesday Mar 08, 2022 19:04:11 CET
 */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "[WrongCat] default constructor" << std::endl; 
}

WrongCat::WrongCat(const WrongCat &other)
{
	*this = other;

	std::cout << "[WrongCat] copy constructor" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "[WrongCat] deconstructor" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout<< "[WrongCat] miauw, miauw." << std::endl;
}

