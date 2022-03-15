/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : Intern
 * @created     : Tuesday Mar 15, 2022 16:45:13 CET
 */

#include "Intern.hpp"

Intern::Intern() {
	std::cout << "[Intern] created" << std::endl;
}

Intern::Intern(const Intern &other) {
	std::cout << "[Intern] copied from another object" << std::endl;
	*this = other;
}

Intern::~Intern() {
	std::cout << "[Intern] destroyed" << std::endl;
}

Form *Intern::makeForm(std::string name, std::string target) {
	static const int n = 3;
	t_forms forms[n] = {
		{"Shrubbery", new ShrubberyCreationForm(target)},
		{"Robotomy", new RobotomyRequestForm(target)},
		{"President", new PresidentialPardonForm(target)}
	};

	Form *ret = NULL;
	for (int i = 0; i < n; i++) {
		if (forms[i]._name == name)
			ret = forms[i].formClass;
		else
			delete forms[i].formClass;
	}

	if (ret != NULL)
		std::cout << "Intern creates " << name << std::endl;
	else
		std::cout << "Intern fails to create " << name << std::endl;

	return ret;
}
