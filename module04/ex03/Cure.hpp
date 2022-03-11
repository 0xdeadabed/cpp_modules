/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : Cure
 * @created     : Wednesday Mar 09, 2022 15:17:43 CET
 */

#ifndef CURE_HPP

#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
    public:
        Cure ();
		Cure(const Cure &other);
        ~Cure ();

		Cure &operator=(const Cure &other);
		AMateria *clone () const;
		void use(ICharacter &t); 
};

#endif /* end of include guard CURE_HPP */

