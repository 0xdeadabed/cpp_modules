/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : main
 * @created     : Thursday Mar 10, 2022 11:02:33 CET
 */

#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat *bob = new Bureaucrat("Bob", 2);
	try {
		std::cout << "1: " << *bob << std::endl;
		bob->increment(10);
		std::cout << "2: " << *bob << std::endl;
		bob->increment(200);
		std::cout << "3: " << *bob << std::endl;
	} catch (std::exception &e) {
		std::cout<< e.what() << std::endl;
	}
	delete bob;
    return 0;
}

