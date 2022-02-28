//
// Created by hypn0x on 2/22/22.
//

#include "Zombie.h"
#include <iostream>

Zombie::Zombie(std::string name)
    : _name(name) {}

Zombie::~Zombie(){
	std::cout << "" << this->_name << ": Enough brainz..." << std::endl;;
}

void Zombie::announce() const {
	std::cout << "" << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
