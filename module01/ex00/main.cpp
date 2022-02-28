//
// Created by hypn0x on 2/22/22.
//


#include "Zombie.h"



int main() {
	Zombie *kazuma = newZombie("Kazuma");
	kazuma->announce();
	delete kazuma;


	Zombie *subaru = newZombie("Subaru");
	subaru->announce();

	Zombie *eren = newZombie("Eren");
	eren->announce();
	subaru->announce();
	delete subaru;

	std::cout << std::endl;

	randomChump("Pro zombie");

	return 0;
}