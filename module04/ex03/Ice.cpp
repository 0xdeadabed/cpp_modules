/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : Ice
 * @created     : Wednesday Mar 09, 2022 14:33:39 CET
 */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") { /*std::cout << "Hello " << this->_type << std::endl;*/ }

Ice::Ice(const Ice &other) : AMateria("ice"){
	*this = other;
}

Ice::~Ice() {}

Ice &Ice::operator=(const Ice &other) {
	this->_type = other._type;

	return *this;
}

AMateria *Ice::clone() const {
	return new Ice(*this);
}

void Ice::use(ICharacter &target) {
	std::cout
		<< this->_type
		<< ": * shoots an ice bolt at "
		<< target.getName()
		<< " *"
		<< std::endl;
}
