#include <iostream>
#include <cmath>
#include "Fixed.hpp"

// Initialize the static member of the Fixed class
int Fixed::_fractional_bits = 8;

// Default constructor
Fixed::Fixed( void ) : _fixed_point_value(0) {
	std::cout << "Default constructor called" << std::endl;
}

// Const integer constructor
Fixed::Fixed( const int number ) {
	std::cout << "Int constructor called" << std::endl;
	this->_fixed_point_value = this->_int_to_fixed_point(number);
}

// Const float constructor
Fixed::Fixed( const float number ) {
	std::cout << "Float constructor called" << std::endl;
	this->_fixed_point_value = this->_float_to_fixed_point(number);
}

// Copy constructor
Fixed::Fixed( const Fixed& fixed ) {
	std::cout << "Copy constructor called" << std::endl;
	this->_fixed_point_value = fixed.getRawBits();
}

// Destructor
Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}

// Copy assignment operator
Fixed&	Fixed::operator=( const Fixed& fixed ) {
	if (this != &fixed ) {
		std::cout << "Copy assignment operator called" << std::endl;
		this->_fixed_point_value = fixed.getRawBits();
	}
	return *this;
}

int Fixed::getRawBits( void ) const {
	// std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed_point_value;
}

void	Fixed::setRawBits(int const raw) {
	// std::cout << "setRawBits member function called" << std::endl;
	this->_fixed_point_value = raw;
}

int		Fixed::_int_to_fixed_point( const int number ) {
	return number << this->_fractional_bits;
}

int		Fixed::_float_to_fixed_point( const float number ) {
	return roundf(number * (1 << this->_fractional_bits));
}

int		Fixed::toInt( void ) const {
	return this->_fixed_point_value >> this->_fractional_bits;
}

float	Fixed::toFloat( void ) const {
	return (float)this->_fixed_point_value / (1 << this->_fractional_bits);
}

std::ostream& operator<<( std::ostream& os, const Fixed& fixed ) {
	os << fixed.toFloat();
	return os;
}

// Overload comparison operators
bool	Fixed::operator<(const Fixed& rhs) const {
	return this->getRawBits() < rhs.getRawBits();
}

bool	Fixed::operator>(const Fixed& rhs) const {
	return rhs < *this;
}

bool	Fixed::operator<=(const Fixed& rhs) const {
	return !(*this > rhs);
}

bool	Fixed::operator>=(const Fixed& rhs) const {
	return !(*this < rhs);
}

bool	Fixed::operator==(const Fixed& rhs) const {
	return this->getRawBits() == rhs.getRawBits();
}

bool	Fixed::operator!=(const Fixed& rhs) const {
	return !(*this == rhs);
}

// Overload arithmetic operators
Fixed	Fixed::operator-(const Fixed& rhs) const {
	Fixed	fixed = this->toFloat() - rhs.toFloat();
	return fixed;
}

Fixed	Fixed::operator+(const Fixed& rhs) const {
	Fixed fixed = this->toFloat() + rhs.toFloat();
	return fixed;
}

Fixed	Fixed::operator*(const Fixed& rhs) const {
	Fixed fixed = this->toFloat() * rhs.toFloat();
	return fixed;
}

Fixed	Fixed::operator/(const Fixed& rhs) const {
	Fixed fixed = this->toFloat() / rhs.toFloat();
	return fixed;
}

// Overload increment/decrement operators

// Post-increment
Fixed	Fixed::operator++(int) {

	Fixed	copy (*this);

	this->setRawBits(this->getRawBits() + 1);
	return copy;
}

// Post-decrement
Fixed	Fixed::operator--(int) {
	Fixed	copy (*this);

	this->setRawBits(this->getRawBits() - 1);
	return copy;
}

// Pre-increment
Fixed&	Fixed::operator++() {
	this->setRawBits(this->getRawBits() + 1);
	return *this;
}

// Pre-decrement
Fixed&	Fixed::operator--() {
	this->setRawBits(this->getRawBits() - 1);
	return *this;
}

// Min and Max
Fixed&	Fixed::min(Fixed& a, Fixed& b) {
	if (a < b)
		return a;
	return b;
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b) {
	if (a < b)
		return a;
	return b;
}

Fixed&	Fixed::max(Fixed& a, Fixed& b) {
	if (a > b)
		return a;
	return b;
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b) {
	if (a > b)
		return a;
	return b;
}
