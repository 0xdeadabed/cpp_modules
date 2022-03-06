/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : Fixed
 * @created     : Friday Mar 04, 2022 17:54:04 CET
 */

#ifndef FIXED_HPP

#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        /* private data */
		static  const int _nFractBits = 8;
		int _rawBits;
    public:
        Fixed ();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &other);
		Fixed &operator=(const Fixed &other);
        ~Fixed ();

		void setRawBits(const int rawBits);
		int	getRawBits() const;
		int toInt() const;
		float toFloat() const;
};

std::ostream &operator<<(std::ostream &ostream, const Fixed &myClass);

#endif /* end of include guard FIXED_HPP */

