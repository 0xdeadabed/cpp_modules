/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : ShrubberyCreationForm
 * @created     : Friday Mar 11, 2022 11:51:45 CET
 */

#ifndef SHRUBBERYCREATIONFORM_HPP

#define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form {
    private:
        ShrubberyCreationForm ();
    public:
		ShrubberyCreationForm(const std::string &t);
		ShrubberyCreationForm(const ShrubberyCreationForm &other);
        ~ShrubberyCreationForm ();

		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);

	void executeAction() const;
};

#endif /* end of include guard SHRUBBERYCREATIONFORM_HPP */
