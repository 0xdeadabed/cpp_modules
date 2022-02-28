//
// Created by hypn0x on 2/23/22.
//

#include "Zombie.h"

Zombie *newZombie(std::string name) {
	return new Zombie(name);
}