/**
 * @author      : hypn0x (hypn0x@$HOSTNAME)
 * @file        : Point
 * @created     : Monday Mar 07, 2022 00:15:07 UTC
 */

#include "Point.hpp"

Point::Point() : x(Fixed()), y(Fixed()){}

Point::Point(const float x, const float y) : x(Fixed(x)), y(Fixed(y)) {}

Point::Point(const Fixed x, const Fixed y) : x(x), y(y) {}

Point::Point(const Point &other) : x(other.x), y(other.y) {}

Point::~Point() {}

Fixed Point::getX() const {
	return this->x;
}

Fixed Point::getY() const {
	return this->y;
}
