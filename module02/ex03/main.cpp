/**
 * @author      : hypn0x (hypn0x@$HOSTNAME)
 * @file        : main
 * @created     : Monday Mar 07, 2022 00:52:59 UTC
 */

#include <iostream>
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main()
{
	Point a(Fixed(2), Fixed());
	Point b(Fixed(-2), Fixed());
	Point c(Fixed(), Fixed(2));
	Point p(Fixed(1.4f), Fixed(1.4f));
	std::cout << "Triangle intersection -> "
		<< (bsp(a, b, c, p) ? "true" : "false") << std::endl;
    return 0;
}

