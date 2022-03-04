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

Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed()
{
	std::cout << "Deconstructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &other) {
		this->_rawBits = other.getRawBits();
	}
	return *this;
}

void Fixed::setRawBits(const int rawBits) {
	std::cout << "setRawBits method called" << std::endl;
	this->_rawBits = rawBits;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits method called" << std::endl;
	return this->_rawBits;
}
