/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : main
 * @created     : Friday Mar 04, 2022 11:52:39 CET
 */


#include "Fixed.hpp"

int main( void ) {
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;

		std::cout << b << std::endl;

		std::cout << Fixed::max( a, b ) << std::endl;
	}
	return 0;
	
}	
