//
// Created by Hajar Sabir on 2/24/22.
//

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name);

int main() {
	int size;
	Zombie *horde;

	size = 4;
	std::cout << "Size: " << size << std::endl;
	horde = zombieHorde(size, "horde_00");
	std::cout << "Horde: " << horde << std::endl;
	for (int i = 0; i < size; i++) horde[i].announce();
	delete[] horde;

	std::cout << std::endl;

	size = 2;
	std::cout << "Size: " << size << std::endl;
	horde = zombieHorde(size, "horde_01");
	std::cout << "Horde: " << horde << std::endl;
	for (int i = 0; i < size; i++) horde[i].announce();
	delete[] horde;

	std::cout << std::endl;

	size = 0;
	std::cout << "Size: " << size << std::endl;
	horde = zombieHorde(size, "horde_02");
	std::cout << "Horde: " << horde << std::endl;
	for (int i = 0; i < size; i++) horde[i].announce();
	delete[] horde;

	std::cout << std::endl;

	size = -1;
	std::cout << "Size: " << size << std::endl;
	horde = zombieHorde(size, "horde_04");
	std::cout << "Horde: " << horde << std::endl;
	for (int i = 0; i < size; i++) horde[i].announce();
	delete[] horde;

	return 0;
}
