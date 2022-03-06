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
        Fixed (); // Default constructor
		Fixed(const Fixed &other); // Copy constructor
		Fixed &operator=(const Fixed &other); // Copy assignment operator overload
        ~Fixed ();


		void setRawBits(const int rawBits);
		int	getRawBits() const;
};

#endif /* end of include guard FIXED_HPP */

