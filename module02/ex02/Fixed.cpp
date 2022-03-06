/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : Fixed
 * @created     : Friday Mar 04, 2022 17:56:26 CET
 */

#include "Fixed.hpp"


/*		Constructor && Destructor		*/
Fixed::Fixed()	: _rawBits(0) {}

Fixed::Fixed(const int value) {
	this->_rawBits = value << Fixed::_nFractBits;
}

Fixed::Fixed(const float value) {
	this->_rawBits = roundf(value *(1 << Fixed::_nFractBits));
}

Fixed::Fixed(const Fixed &other) {
	*this = other;
}

Fixed::~Fixed() {}

/*		Copy assignement		*/

Fixed &Fixed::operator=(const Fixed &other) {
	if (this != &other) {
		this->_rawBits = other._rawBits;
	}
	return *this;
}


/*	cmp functions	*/
bool Fixed::operator>(const Fixed &other) const {
	return this->_rawBits > other._rawBits;
}

bool Fixed::operator<(const Fixed& other) const {
	return other > *this;
}

bool Fixed::operator>=(const Fixed& other) const {
	return !(other > *this);
}

bool Fixed::operator<=(const Fixed& other) const {
	return !(*this > other);
}

bool Fixed::operator==(const Fixed& other) const {
	return this->_rawBits == other._rawBits;
}

bool Fixed::operator!=(const Fixed& other) const {
	return !(this->_rawBits == other._rawBits);
}

/*		Math ops		*/
Fixed Fixed::operator+(const Fixed& other) const {
	Fixed res;

	res._rawBits = (this->_rawBits + other._rawBits);
	return res;
}

Fixed Fixed::operator-(const Fixed& other) const {
	Fixed res;

	res._rawBits = (this->_rawBits - other._rawBits);
	return res;
}

Fixed Fixed::operator*(const Fixed& other) const {
	Fixed res(this->toFloat() * other.toFloat());
	return res;
}

Fixed Fixed::operator/(const Fixed& other) const {
	Fixed res(this->toFloat() / other.toFloat());
	return res;
}

Fixed& Fixed::operator++() {
	++(this->_rawBits);
	return (*this);
}

Fixed& Fixed::operator--() {
	--(this->_rawBits);
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed prev(*this);

	++(this->_rawBits);
	return prev;
}

Fixed Fixed::operator--(int) {
	Fixed prev(*this);

	--(this->_rawBits);
	return prev;
}

/*		Min && Max		*/
Fixed& Fixed::min(Fixed& lhs, Fixed& rhs) {
	if (lhs < rhs) return lhs;
	return rhs;
}

Fixed& Fixed::max(Fixed& lhs, Fixed& rhs) {
	if (lhs > rhs) return lhs;
	return rhs;
}

const Fixed& Fixed::min(const Fixed& lhs, const Fixed& rhs) {
	if (lhs < rhs) return lhs;
	return rhs;
}

const Fixed& Fixed::max(const Fixed& lhs, const Fixed& rhs) {
	if (lhs > rhs) return lhs;
	return rhs;
}

/*	Getter && Setter	*/
void Fixed::setRawBits(const int rawBits) {
	this->_rawBits = rawBits;
}

int Fixed::getRawBits() const {
	return this->_rawBits;
}


/*	Convertion funcs	*/
int	Fixed::toInt() const {
	return this->_rawBits >> Fixed::_nFractBits;
}

float Fixed::toFloat() const {
	return (float)this->_rawBits / (1 << Fixed::_nFractBits);
}

std::ostream &operator<<(std::ostream &os, const Fixed &obj) {
	os << obj.toFloat();
	return os;
}
