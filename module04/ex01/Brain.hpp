/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : Brain
 * @created     : Wednesday Mar 09, 2022 09:18:59 CET
 */

#ifndef BRAIN_HPP

#define BRAIN_HPP

#include <iostream>

class Brain
{
    public:
        Brain ();
		Brain(const Brain &other);
        virtual ~Brain ();

		Brain &operator=(const Brain &other);
		static const int nIdeas = 100;
		std::string ideas[Brain::nIdeas];
};

#endif /* end of include guard BRAIN_HPP */

