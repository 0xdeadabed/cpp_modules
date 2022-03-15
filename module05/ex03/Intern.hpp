/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : Intern
 * @created     : Tuesday Mar 15, 2022 16:45:06 CET
 */

#ifndef INTERN_HPP

#define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
private:
	typedef struct s_forms {
		std::string _name;
		Form *formClass;
	} t_forms;
public:

	Intern();

	Intern(const Intern &other);

	~Intern();

	Form *makeForm(std::string name, std::string target);
};

#endif /* end of include guard INTERN_HPP */
