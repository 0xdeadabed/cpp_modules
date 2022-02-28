//
// Created by hypn0x on 2/23/22.
//

#include "Zombie.h"

void randomChump(std::string name)
{
	Zombie z = Zombie(name);
	z.announce();
}