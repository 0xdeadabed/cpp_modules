/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : DiamondTrap
 * @created     : Monday Mar 07, 2022 17:53:00 CET
 */

#ifndef DIAMONDTRAP_HPP

#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap{
    private:
        /* private data */
		std::string _name;
    public:
        DiamondTrap ();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &other);
        ~DiamondTrap ();

		DiamondTrap &operator=(const DiamondTrap &other);

		void attack(const std::string &target);
		void whoAmI();
};

#endif /* end of include guard DIAMONDTRAP_HPP */

