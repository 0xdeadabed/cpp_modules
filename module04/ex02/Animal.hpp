/**
 * @author      : hypn0x (hypn0x@$HOSTNAME)
 * @file        : Animal
 * @created     : Monday Mar 07, 2022 23:46:22 UTC
 */

#ifndef ANIMAL_HPP

#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
		std::string type;
        Animal ();
		Animal (const Animal &other);
    
	public:
        virtual ~Animal ();
		Animal &operator=(const Animal &other);
		virtual void makeSound() const = 0;
		const std::string &getType() const;
};

#endif /* end of include guard ANIMAL_HPP */
