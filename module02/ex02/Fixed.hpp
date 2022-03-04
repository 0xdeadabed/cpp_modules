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
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &other);
        ~Fixed ();

		Fixed &operator=(const Fixed &other);

		bool operator>(const Fixed &other)const;
		bool operator<(const Fixed &other)const;
		bool operator>=(const Fixed &other)const;
		bool operator<=(const Fixed &other)const;
		bool operator ==(const Fixed &other)const;
		bool operator !=(const Fixed &other)const;

		Fixed operator+(const Fixed &other)const;
		Fixed operator-(const Fixed &other)const;
		Fixed operator*(const Fixed &other)const;
		Fixed operator/(const Fixed &other)const;

		Fixed &operator++();
		Fixed &operator--();

		Fixed operator++(int);
		Fixed operator--(int);

		static Fixed &min(Fixed &lhs, Fixed &rhs);
		static Fixed &max(Fixed &lhs, Fixed &rhs);
		static const Fixed &min(const Fixed &lhs, const Fixed &rhs);
		static const Fixed &max(const Fixed &lhs, const Fixed &rhs);

		void setRawBits(const int rawBits);
		int	getRawBits() const;
		int toInt() const;
		float toFloat() const;
    private:
        /* private data */
		static  const int _nFractBits = 8;
		int _rawBits;
};

std::ostream &operator<<(std::ostream &ostream, const Fixed &myClass);

#endif /* end of include guard FIXED_HPP */

