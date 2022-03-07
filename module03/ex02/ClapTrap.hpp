/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : ClapTrap
 * @created     : Monday Mar 07, 2022 10:30:41 CET
 */

#ifndef CLAPTRAP_HPP

#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        /* private data */
		std::string _name;
		unsigned int _hitPoint;
		unsigned int _energyPoint;
		unsigned int _attackDamage;
    public:
        ClapTrap ();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &other);
        virtual ~ClapTrap ();

		ClapTrap &operator=(const ClapTrap &other);

		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif /* end of include guard CLAPTRAP_HPP */

