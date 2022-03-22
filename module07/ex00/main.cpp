/**
 * @author   : Hajar Sabir (wubbalubba@dub.dub)
 * @created  : 3/22/22.
 */

#include "functions.hpp"

int main(void) {
	std::cout << "=============================================" << std::endl;
	int x = 21;
	int y = 42;
	std::cout << "before swap" << std::endl;
	std::cout << "x is " << x << ", y is " << y << std::endl;
	::swap(x, y);
	std::cout << "after swap" << std::endl;
	std::cout << "x is " << x << ", y is " << y << std::endl;
	std::cout << "the min value is " << ::min( x, y ) << std::endl;
	std::cout << "the max value is " << ::max( x, y ) << std::endl;
	std::cout << "=============================================" << std::endl;
}
