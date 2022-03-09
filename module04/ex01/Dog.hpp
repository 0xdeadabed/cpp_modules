/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : Dog
 * @created     : Tuesday Mar 08, 2022 18:55:49 CET
 */

#ifndef DOG_HPP

#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	private:
		Brain *brain;
    public:
		Dog();
        Dog(const Dog &other);
		~Dog();
    
		Dog &operator=(const Dog &other);
		Brain *getBrain() const;
		void makeSound() const;
};

#endif /* end of include guard DOG_HPP */

