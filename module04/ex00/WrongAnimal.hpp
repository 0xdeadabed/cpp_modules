/**
 * @author      : hypn0x (hypn0x@$HOSTNAME)
 * @file        : WrongAnimal
 * @created     : Monday Mar 07, 2022 23:46:22 UTC
 */

#ifndef WRONGANIMAL_HPP

#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        /* private data */
		std::string type;
    public:
        WrongAnimal ();
		WrongAnimal (const WrongAnimal &other);
        virtual ~WrongAnimal ();

		WrongAnimal &operator=(const WrongAnimal &other);

		void makeSound() const;

		const std::string &getType() const;
};

#endif /* end of include guard ANIMAL_HPP */

