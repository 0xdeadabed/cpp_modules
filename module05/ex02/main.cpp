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

#include <iostream>

int main() {
	std::cout << std::endl;
	std::cout << "------------------------------------------------------------------------------" << std::endl;
	std::cout << "++++++++++++++++++++++++++" << std::endl;
	std::cout << "+ 	Shruberry tests	 +" << std::endl;
	std::cout << "++++++++++++++++++++++++++" << std::endl;

	Bureaucrat *scrat = new Bureaucrat("scrat", 149);
	ShrubberyCreationForm *sh = new ShrubberyCreationForm("sh");
//	ShrubberyCreationForm *sh1 = new ShrubberyCreationForm("new");
//	*sh1 = *sh;
//	std::cout << *sh1 << std::endl;
//	std::cout << *sh << std::endl;

	std::cout << std::endl;
	std::cout << *scrat << std::endl;
	std::cout << *sh << std::endl;
	std::cout << std::endl;

	try {
		scrat->executeForm(*sh);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	sh->beSigned(*scrat);

	try {
		scrat->executeForm(*sh);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	delete scrat;
	delete sh;
//	delete sh1;

	std::cout << std::endl;
	std::cout << "------------------------------------------------------------------------------" << std::endl;
	std::cout << "++++++++++++++++++++++++++" << std::endl;
	std::cout << "+ 	Robotomy tests	 +" << std::endl;
	std::cout << "++++++++++++++++++++++++++" << std::endl;

	Bureaucrat *rcrat = new Bureaucrat("rcrat", 150);
	RobotomyRequestForm *rb = new RobotomyRequestForm("rb");

	std::cout << std::endl;
	std::cout << *rcrat << std::endl;
	std::cout << *rb << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < 5; i++)
		rb->executeAction();
	delete rcrat;
	delete rb;

	std::cout << std::endl;
	std::cout << "------------------------------------------------------------------------------" << std::endl;
	std::cout << "++++++++++++++++++++++++++" << std::endl;
	std::cout << "+ 	Robotomy tests	 +" << std::endl;
	std::cout << "++++++++++++++++++++++++++" << std::endl;

	Bureaucrat *pcrat = new Bureaucrat("prcat", 90);
	PresidentialPardonForm *pp = new PresidentialPardonForm("pp");

	std::cout << std::endl;
	std::cout << *pcrat << std::endl;
	std::cout << *pp << std::endl;
	std::cout << std::endl;

	pp->executeAction();
	std::cout << std::endl;
	delete pcrat;
	delete pp;

	std::cout << std::endl;
	std::cout << "------------------------------------------------------------------------------" << std::endl;
	std::cout << std::endl;

	return 0;
}
