/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : Cat
 * @created     : Tuesday Mar 08, 2022 19:02:57 CET
 */

#ifndef CAT_HPP

#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain *brain;
    public:
        Cat ();
		Cat(const Cat &other);
		~Cat ();
    
		Cat  &operator=(const Cat &other);
		void makeSound() const;
		Brain *getBrain() const;
};

#endif /* end of include guard CAT_HPP */

