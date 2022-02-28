//
// Created by Hajar Sabir on 2/25/22.
//

#ifndef CPPP_HUMANA_H
#define CPPP_HUMANA_H

#include "Weapon.hpp"

class HumanA {
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();

	void attack() const;

private:
	std::string _name;
	Weapon &_weapon;
};


#endif //CPPP_HUMANA_H
