/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : ScavTrap
 * @created     : Monday Mar 07, 2022 12:37:37 CET
 */

#ifndef SCAVTRAP_HPP

#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
        /* private data */
    public:
        ScavTrap ();
		ScavTrap (std::string name);
		ScavTrap (const ScavTrap &other);
        ~ScavTrap ();

		ScavTrap &operator=(const ScavTrap &other);

		void attack(const std::string &target);
		void guardGate();
};

#endif /* end of include guard SCAVTRAP_HPP */

