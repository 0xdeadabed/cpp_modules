/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : Ice
 * @created     : Wednesday Mar 09, 2022 13:41:52 CET
 */

#ifndef ICE_HPP

#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
    public:
        Ice ();
		Ice (const Ice &other);
        ~Ice ();

		Ice &operator=(const Ice &other);
		AMateria *clone() const;
		void use(ICharacter &t);
};

#endif /* end of include guard ICE_HPP */

