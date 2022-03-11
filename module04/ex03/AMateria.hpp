/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : AMateria
 * @created     : Wednesday Mar 09, 2022 11:51:28 CET
 */

#ifndef AMATERIA_HPP

#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {
	private:
		AMateria();
	protected:
		std::string _type;
    public:
		AMateria(std::string const &type);
        virtual ~AMateria ();
		const std::string &getType() const;
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &t);
};

#endif /* end of include guard AMATERIA_HPP */

