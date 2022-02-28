//
// Created by Hajar Sabir on 2/24/22.
//

#ifndef CPPP_ZOMBIE_H
#define CPPP_ZOMBIE_H

#include <iostream>

class Zombie {
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();

	void setName(std::string newName);
	void announce() const;

private:
	std::string _name;
};

Zombie *zombieHorde(int N, std::string name);
Zombie *zombieHorde(int N, std::string name);

#endif //CPPP_ZOMBIE_H
