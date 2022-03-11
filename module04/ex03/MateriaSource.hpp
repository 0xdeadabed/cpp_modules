/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : MateriaSource
 * @created     : Friday Mar 11, 2022 14:27:29 CET
 */

#ifndef MATERIASOURCE_HPP

#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include <iostream>

class MateriaSource : public IMateriaSource {
    private:
		static const int materiaSize = 4;

		AMateria* _materias[MateriaSource::materiaSize];
		int _nLearned;
    public:
        MateriaSource ();
		MateriaSource (const MateriaSource &other);
        ~MateriaSource ();

		MateriaSource &operator=(const MateriaSource &other);

		void learnMateria(AMateria *materia);
		AMateria *createMateria(const std::string &type); 
};

#endif /* end of include guard MATERIASOURCE_HPP */

