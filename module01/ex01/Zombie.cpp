//
// Created by Hajar Sabir on 2/24/22.
//

#include "Zombie.hpp"

Zombie::Zombie()
	: _name("zombie") {}

Zombie::Zombie(std::string name)
	: _name(name) {}

Zombie::~Zombie() {
	std::cout << this->_name << ": Enought brainz..." << std::endl;
}

void Zombie::announce() const {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string newName) {
	this->_name = newName;
}