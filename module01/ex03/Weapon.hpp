//
// Created by Hajar Sabir on 2/25/22.
//

#ifndef CPPP_WEAPON_H
#define CPPP_WEAPON_H

#include <iostream>

class Weapon {
public:
	Weapon(std::string type);
	~Weapon();

	void setType(std::string type);
	std::string getType() const;

private:
	std::string _type;
};


#endif //CPPP_WEAPON_H
