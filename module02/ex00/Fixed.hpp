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
    public:
        Fixed ();
		Fixed(const Fixed &other);
        ~Fixed ();

		Fixed &operator=(const Fixed &other);

		void setRawBits(const int rawBits);
		int	getRawBits() const;
    private:
        /* private data */
		static  const int _nFractBits = 8;
		int _rawBits;
};

#endif /* end of include guard FIXED_HPP */

