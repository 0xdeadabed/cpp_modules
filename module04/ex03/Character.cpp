/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : Character
 * @created     : Wednesday Mar 09, 2022 15:39:47 CET
 */

#include "Character.hpp"

Character::Character() {}

Character::Character(const std::string &name)
	: _name(name), _nEquiped(0) {
		for (int i = 0; i < Character::inventorySize; i++) 
			this->_inventory[i] = NULL;
}

Character::Character(const Character &other) {
	*this = other;
}

Character::~Character() {}

