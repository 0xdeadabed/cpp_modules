/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : Brain
 * @created     : Wednesday Mar 09, 2022 09:21:32 CET
 */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "[Brain] constructor" << std::endl;
}

Brain::Brain(const Brain &other) {
	*this = other;

	std::cout << "[Brain] copy constructor" << std::endl;
}

Brain::~Brain() {
	std::cout << "[Brain] deconstructor" << std::endl;
}

Brain &Brain::operator=(const Brain &other) {
	for (int i = 0; i < nIdeas; i++) {
		this->ideas[i] = other.ideas[i];
	}

	std::cout << "[Brain] assignment operator" << std::endl;
	return *this;
}
