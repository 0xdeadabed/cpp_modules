/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : MateriaSource
 * @created     : Friday Mar 11, 2022 14:34:40 CET
 */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _nLearned(0) {
	for (int i = 0; i < MateriaSource::materiaSize; i++) {
		this->_materias[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &other) {
	*this = other;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < MateriaSource::materiaSize; i++) {
		if (this->_materias[i] != NULL)
			delete this->_materias[i];
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other) {
	this->_nLearned = other._nLearned;

	for (int i = 0; i < MateriaSource::materiaSize; i++) {
		if (this->_materias[i] != NULL)
			delete this->_materias[i];
		if (other._materias[i] != NULL)
			this->_materias[i] = other._materias[i]->clone();
		else
			this->_materias[i] = NULL;
	}

	return *this;
}

void MateriaSource::learnMateria(AMateria *m) {
	if (this->_nLearned < MateriaSource::materiaSize) {
		this->_materias[this->_nLearned] = m;
		this->_nLearned++;
	}
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < MateriaSource::materiaSize; i++) {
		if (this->_materias[i]->getType() == type) {
			return this->_materias[i]->clone();
		}
	}

	return NULL;
}

