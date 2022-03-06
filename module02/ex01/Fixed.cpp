/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : Fixed
 * @created     : Friday Mar 04, 2022 17:56:26 CET
 */

#include "Fixed.hpp"

Fixed::Fixed()	: _rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	this->_rawBits = value << Fixed::_nFractBits;
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = roundf(value *(1 << Fixed::_nFractBits));
}

Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_rawBits = other._rawBits;
	}
	return *this;
}

void Fixed::setRawBits(const int rawBits) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_rawBits = rawBits;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_rawBits;
}

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
