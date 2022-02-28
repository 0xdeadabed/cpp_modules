//
// Created by Hajar Sabir on 2/25/22.
//

#ifndef CPPP_HUMANB_H
#define CPPP_HUMANB_H

#include "Weapon.hpp"

class HumanB {
public:
	HumanB(std::string name);
	~HumanB();
	void attack() const;
	void setWeapon(const Weapon &weapon);

private:
	std::string _name;
	Weapon* _weapon;
};

#endif //CPPP_HUMANB_H
