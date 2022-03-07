/**
 * @author      : hypn0x (hypn0x@$HOSTNAME)
 * @file        : Point
 * @created     : Monday Mar 07, 2022 00:10:58 UTC
 */

#ifndef POINT_HPP

#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
		const Fixed x;
		const Fixed y;

    public:
        Point ();
		Point(const float x, const float y);
		Point(const Fixed x, const Fixed y);
		Point(const Point &other);
        ~Point ();
        
		Fixed getX() const;
		Fixed getY() const;
};

#endif /* end of include guard POINT_HPP */

