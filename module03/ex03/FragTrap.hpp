/*
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : FragTrap
 * @created     : Monday Mar 07, 2022 16:32:10 CET
 */

#ifndef FRAGTRAP_HPP

#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    protected:
        /* private data */
    public:
        FragTrap ();
		FragTrap (std::string name);
		FragTrap (const FragTrap &other);
        virtual ~FragTrap ();

	FragTrap &operator=(const FragTrap &other);

	void highFivesGuys(void);
};

#endif /* end of include guard FRAGTRAP_HPP */

