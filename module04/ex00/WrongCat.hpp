/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : WrongCat
 * @created     : Tuesday Mar 08, 2022 19:02:57 CET
 */

#ifndef WRONGCAT_HPP

#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    public:
        WrongCat ();
		WrongCat(const WrongCat &other);
		~WrongCat ();
    
		void makeSound() const;
};

#endif /* end of include guard CAT_HPP */

