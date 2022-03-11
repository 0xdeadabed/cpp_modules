/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : IMateriaSource
 * @created     : Friday Mar 11, 2022 14:25:51 CET
 */

#ifndef IMATERIASOURCE_HPP

#define IMATERIASOURCE_HPP
#include "AMateria.hpp"

class IMateriaSource {
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif /* end of include guard IMATERIASOURCE_HPP */

