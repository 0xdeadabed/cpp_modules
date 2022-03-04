/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : main
 * @created     : Friday Mar 04, 2022 11:52:39 CET
 */

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return 0;
}
