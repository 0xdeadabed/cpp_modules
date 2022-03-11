/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : Cure
 * @created     : Wednesday Mar 09, 2022 15:19:38 CET
 */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") { /*std::cout << "Cure debug" << std::endl;*/ }

Cure::Cure(const Cure &other) : AMateria("cure") {
	*this = other;
}

Cure::~Cure() {}

Cure &Cure::operator=(const Cure &other) {
	this->_type= other._type;

	return *this;
}

AMateria *Cure::clone() const {
	return new Cure (*this);
}

void Cure::use(ICharacter &target) {
	std::cout
		<< "Cure: * heals "
		<< target.getName()
		<< "'s wounds *"
		<< std::endl;
}

