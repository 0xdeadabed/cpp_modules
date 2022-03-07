/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : DiamondTrap
 * @created     : Monday Mar 07, 2022 17:52:47 CET
 */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
    this->_name = "DiamondTrap";
	this->ClapTrap::_name = std::string("DiamondTrap").append("_clap_name");
	this->_hitPoint = FragTrap::_hitPoint;
	this->_energyPoint = ScavTrap::_energyPoint;
	this->_attackDamage = FragTrap::_attackDamage;

	std::cout << this->_name << " DiamondTrap created " << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) {
	this->_name = name;
	this->ClapTrap::_name = name.append("_clap_name");
	this->_hitPoint = FragTrap::_hitPoint;
	this->_energyPoint = ScavTrap::_energyPoint;
	this->_attackDamage = FragTrap::_attackDamage;

	std::cout << this->_name << " DiamondTrap created " << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) {
	*this = other;

	std::cout << this->_name << " DiamondTrap copied" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << this->_name << " DiamondTrap destroyed " << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
	this->ClapTrap::_name = other.ClapTrap::_name;
	this->_name = other._name;
	this->_hitPoint = other._hitPoint;
	this->_energyPoint = other._energyPoint;
	this->_attackDamage = other._attackDamage;

	std::cout << this->_name << " DiamondTrap overloaded " << other._name << std::endl;

	return *this;
}

void DiamondTrap::attack(const std::string &target) {
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "I am " << this->_name << ", my ClapTrap name is "
		<< this->ClapTrap::_name << std::endl;
}
