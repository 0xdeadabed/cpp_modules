/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : main
 * @created     : Thursday Mar 10, 2022 11:02:33 CET
 */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
//#include "RobotomyRequestForm.hpp"
//#include "PresidentialPardonForm.hpp"

#include <iostream>

int main() {
	std::cout << "+++++++++++++++" << std::endl;
	std::cout << "+ Hello world +" << std::endl;
	std::cout << "+++++++++++++++" << std::endl;

	Bureaucrat *bcrat = new Bureaucrat("bcrat", 100);
	ShrubberyCreationForm *sh = new ShrubberyCreationForm("sh");
	std::cout << std::endl;
	std::cout << *bcrat << std::endl;
	std::cout << *sh << std::endl;
	std::cout << std::endl;

	try {
		bcrat->executeForm(*sh);
	} catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	sh->beSigned(*bcrat);

	try {
		bcrat->executeForm(*sh);
	} catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	delete bcrat;
	delete sh;
	return 0;
}
