/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : FragTrap
 * @created     : Monday Mar 07, 2022 16:37:59 CET
 */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
    this->_name = "Default";
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;

	std::cout
		<< "["
		<< this->_name
		<< "(FragTrap)] created"
		<< std::endl;
}

FragTrap::FragTrap(std::string name) {
	this->_name = name;
	this->_hitPoint = 100;
	this->_energyPoint = 100;	
	this->_attackDamage = 30;

	std::cout
		<<"["
		<< this->_name
		<< "(FragTrap)] created"
		<< std::endl;
}

FragTrap::FragTrap(const FragTrap &other) {
	*this = other;

	std::cout
		<< "["
		<< this->_name
		<< "(FragTrap)] copied from " << other._name << std::endl;
}

FragTrap::~FragTrap() {
	std::cout
		<< "["
		<< this->_name
		<< "(FragTrap)] destroyed"
		<< std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
	this->_name = other._name;
	this->_hitPoint = other._hitPoint;
	this->_energyPoint =  other._energyPoint;
	this->_attackDamage = other._energyPoint;

	std::cout
		<<"["
		<< this->_name
		<< "(FragTrap)] copied by operator overloading from "
		<< other._name
		<< std::endl;
	
	return *this;
}

void FragTrap::highFivesGuys() {
	if (this->_hitPoint == 0) {
		std::cout
			<< "["
			<< this->_name
			<< "(FragTrap)] dead head can't hight five "
			<< std::endl;
		return ;
	}

	std::cout
		<< "["
		<< this->_name
		<< "(FragTrap)] hight fives!"
		<< std::endl;
}
