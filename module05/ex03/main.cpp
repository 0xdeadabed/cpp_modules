/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : main
 * @created     : Thursday Mar 10, 2022 11:02:33 CET
 */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

#include <iostream>

int main() {
	std::cout << std::endl;
	std::cout << "------------------------------------------------------------------------------" << std::endl;
	std::cout << "++++++++++++++++++++++++++" << std::endl;
	std::cout << "+ 	Intern tests	 +" << std::endl;
	std::cout << "++++++++++++++++++++++++++" << std::endl;

	Bureaucrat *gcrat = new Bureaucrat("gcrat", 149);
	ShrubberyCreationForm *sh = new ShrubberyCreationForm("sh");
	Intern *in = new Intern();

	std::cout << std::endl;

	Form *fr = in->makeForm("Shrubbery", "gcrat");

	std::cout << std::endl;

	delete gcrat;
	delete sh;
	delete in;
	delete fr;

	std::cout << "------------------------------------------------------------------------------" << std::endl;
	std::cout << std::endl;
	return 0;
}
