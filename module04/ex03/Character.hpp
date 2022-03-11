/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : Character
 * @created     : Wednesday Mar 09, 2022 15:34:01 CET
 */

#ifndef CHARACTER_HPP

#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {
    private:
        Character ();

		static const int inventorySize = 4;

		std::string _name;
		int _nEquiped;
		AMateria *_inventory[Character::inventorySize];
    public:
        Character(const std::string &name);
		Character(const Character &other);
		~Character ();

		Character &operator=(const Character &other);

		const std::string &getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
};

#endif /* end of include guard CHARACTER_HPP */

