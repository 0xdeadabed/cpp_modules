/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : main
 * @created     : Thursday Mar 10, 2022 11:02:33 CET
 */

#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat *bcrat = new Bureaucrat("bcrat", 2);
	try {
		std::cout << "1: " << *bcrat << std::endl;
		bcrat->increment(10);
		std::cout << "2: " << *bcrat << std::endl;
		bcrat->increment(200);
		std::cout << "3: " << *bcrat << std::endl;
	} catch (std::exception &e) {
		std::cout<< e.what() << std::endl;
	}
	delete bcrat;

	std::cout << std::endl;

	std::cout << "===========Make new bcrat1 and fcrat============" << std::endl;
	Bureaucrat *bcrat1 = new Bureaucrat("bcrat1", 60);
	Form *fcrat = new Form("fcrat", 120, 10);
	fcrat->beSigned(*bcrat1);
	std::cout << "===ostream===" <<std::endl;
	std::cout << *fcrat << std::endl;

	std::cout << std::endl << "===try catch me if you can===" << std::endl;
	try {
		bcrat1->signForm(*fcrat);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	delete bcrat1;
	delete fcrat;

    return 0;
}

