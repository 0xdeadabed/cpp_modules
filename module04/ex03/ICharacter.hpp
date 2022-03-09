/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : ICharacter
 * @created     : Wednesday Mar 09, 2022 14:19:33 CET
 */

#ifndef ICHARACTER_HPP

#define ICHARACTER_HPP

#include "AMateria.hpp"

class AMateria;

class ICharacter {
	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif /* end of include guard ICHARACTER_HPP */

