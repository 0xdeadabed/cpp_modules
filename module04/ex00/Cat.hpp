/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : Cat
 * @created     : Tuesday Mar 08, 2022 19:02:57 CET
 */

#ifndef CAT_HPP

#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
    public:
        Cat ();
		Cat(const Cat &other);
		~Cat ();
    
		void makeSound() const;
};

#endif /* end of include guard CAT_HPP */

