/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : ScavTrap
 * @created     : Monday Mar 07, 2022 14:01:40 CET
 */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
   this->_name = "Default";
   this->_hitPoint = 100;
   this->_energyPoint = 50;
   this->_hitPoint = 20;

   std::cout << this->_name << " ST object created" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
	this->_name = name;
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_hitPoint = 20;

	std::cout << this->_name << " ST object created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) {
	*this = other;

	std::cout << this->_name << " ST copied from " << other._name << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << this->_name << " ST destroyed" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
	this->_name = other._name;
	this->_hitPoint = other._hitPoint;
	this->_energyPoint = other._energyPoint;
	this->_attackDamage = other._attackDamage;

	std::cout << this->_name << " ST operator overloaded from "
		<< other._name << std::endl;

	return *this;
}

void ScavTrap::attack(const std::string &target) {
	if (this->_hitPoint == 0) {
		std::cout << this->_name << " ST dead head can't attack " << std::endl;
		return;
	}
	else
	{
		std::cout << this->_name << " ST attacked " << target
			<< " caused " << this->_attackDamage << " amount of damage"
			<< std::endl;
	}
}

void ScavTrap::guardGate() {
	if (this->_hitPoint == 0) {
		std::cout << this->_name << " ST dead head can't guard a gate " << std::endl;
		return;
	}

	std::cout << this->_name << " ST guard the gate " << std::endl;
}
