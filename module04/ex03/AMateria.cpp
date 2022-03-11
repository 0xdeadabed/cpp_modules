/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : AMateria
 * @created     : Wednesday Mar 09, 2022 11:59:51 CET
 */

#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(const std::string &type) : _type(type) {}

AMateria::~AMateria() {}

const std::string &AMateria::getType() const {
	return this->_type;
}

void AMateria::use(ICharacter &t) {
	(void)t;
}
