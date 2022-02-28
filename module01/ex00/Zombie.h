//
// Created by hypn0x on 2/22/22.
//

#ifndef CPP_MODULES_ZOMBIE_H
#define CPP_MODULES_ZOMBIE_H

#include <iostream>



class Zombie {
public:
    Zombie(std::string name);
    ~Zombie();

    void announce() const;

private:
    std::string _name;
};

Zombie *newZombie(std::string);
void randomChump(std::string name);

#endif //CPP_MODULES_ZOMBIE_H
