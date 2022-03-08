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
    public:
        Animal ();
		Animal (const Animal &other);
        virtual ~Animal ();

		Animal &operator=(const Animal &other);

		virtual void makeSound();

		const std::string &getType();
    private:
        /* private data */
		std::string type;
};

#endif /* end of include guard ANIMAL_HPP */

