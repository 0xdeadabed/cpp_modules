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

Character::~Character() {
	for (int i = 0; i < this->_nEquiped; i++){
		delete this->_inventory[i];
	}
}

Character &Character::operator=(const Character &other) {
	this->_name = other._name;
	this->_nEquiped = other._nEquiped;
	for (int i = 0; i < Character::inventorySize; i++) {
		this->_inventory[i] = other._inventory[i]->clone();
	}
	return *this;
}

const std::string &Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria *m) {
	if (this->_nEquiped < Character::inventorySize) {
		// need to be shallow copy
		this->_inventory[this->_nEquiped] = m;
		this->_nEquiped++;
	}
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < this->_nEquiped) {
		delete this->_inventory[idx];
		int i = idx;
		while (i < this->_nEquiped)
		{
			this->_inventory[i] = this->_inventory[i + 1];
			i++;
		}
		this->_inventory[i] = NULL;
		--(this->_nEquiped);
	}
}

void Character::use(int idx, ICharacter &t) {
	if (idx >= 0 && idx < this->_nEquiped) {
		this->_inventory[idx]->use(t);
	} else {
		std::cout << "can't use materia, " << idx << " is empty index" << std::endl;
	}
}
