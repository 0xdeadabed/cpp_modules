/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : ClapTrap
 * @created     : Monday Mar 07, 2022 10:38:54 CET
 */

#include "ClapTrap.hpp"


/*		Constructors && Deconstructor	*/

ClapTrap::ClapTrap() : 
	_name("Default"),
	_hitPoint(10),
	_energyPoint(10),
	_attackDamage(){
		std::cout << this->_name << " object created" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: _name(name),
	_hitPoint(10),
	_energyPoint(10),
	_attackDamage(0) {
		std::cout << this->_name << " object created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	*this = other;
	std::cout << this->_name << " copy object" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << this->_name << "object destroyed" << std::endl;
}

/*	######	*/

/*	Operator overload	*/

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	this->_name = other._name;
	this->_hitPoint = other._hitPoint;
	this->_energyPoint = other._energyPoint;
	this->_attackDamage = other._attackDamage;
	
	std::cout << this->_name << " copied from " << other._name << std::endl;

	return *this;
}

void ClapTrap::attack(const std::string &target) {
	if (this->_hitPoint == 0) {
		std::cout << this->_name << ": dead head can't attack!" << std::endl;
		return ;
	}
	else {
		std::cout << this->_name << " attacks " << target
			<< ", causing " << this->_attackDamage << " damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount){
	if (this->_hitPoint == 0) {
		std::cout << this->_name << ": dead head can't get damaged!" << std::endl;
		return ;
	}
	if (amount > _hitPoint)
		amount = _hitPoint;
	this->_hitPoint -= amount;
	std::cout << this->_name << " got " << amount
		<< " amount of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoint == 0) {
		std::cout << this->_name << " dead head can't ne repaired you're not jesus!" << std::endl;
	}
	this->_hitPoint += amount;
	std::cout << this->_name << " has been repaired by " << amount
		<< " amount " << std::endl;
}
