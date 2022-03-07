/**
 * @author      : hypn0x (hypn0x@$HOSTNAME)
 * @file        : bsp
 * @created     : Monday Mar 07, 2022 00:34:22 UTC
 */

#include "Point.hpp"

namespace {
	Fixed points(const Point p0, const Point p1, const Point p2) {
		return (p2.getY() - p1.getY()) * (p0.getX() - p1.getX())
			+ ((p2.getX() * -1) + p1.getX()) * (p0.getY() - p1.getY());
	}
}

bool bsp(const Point a, const Point b, const Point c, const Point point) {
	bool point0, point1, point2;

	point0 = points(point, a, b) > 0;
	point1 = points(point, b, c) > 0;
	point2 = points(point, c, a) > 0;

	return point0 && point1 && point2;
}
