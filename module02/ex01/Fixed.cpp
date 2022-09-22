#include <iostream>
#include <cmath>
#include "Fixed.hpp"

// Initialize the static member of the Fixed class
int Fixed::fractional_bits = 8;

// Default constructor
Fixed::Fixed( void ) : fixed_point_value(0) {
	std::cout << "Default constructor called" << std::endl;
}

// Const integer constructor
Fixed::Fixed( const int number ) {
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point_value = this->int_to_fixed_point(number);
}

// Const float constructor
Fixed::Fixed( const float number ) {
	std::cout << "Float constructor called" << std::endl;
	this->fixed_point_value = this->float_to_fixed_point(number);
}

// Copy constructor
Fixed::Fixed( const Fixed& fixed ) {
	std::cout << "Copy constructor called" << std::endl;
	this->fixed_point_value = fixed.fixed_point_value;
	// getRawBits();
}

// Destructor
Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}

// Copy assignment operator
Fixed&	Fixed::operator=( const Fixed& fixed ) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixed_point_value = fixed.fixed_point_value;
	return *this;
}

int Fixed::getRawBits( void ) const {
	// std::cout << "getRawBits member function called" << std::endl;
	return this->fixed_point_value;
}

void	Fixed::setRawBits(int const raw) {
	// std::cout << "setRawBits member function called" << std::endl;
	this->fixed_point_value = raw;
}

int		Fixed::int_to_fixed_point( const int number ) {
	return number << this->fractional_bits;
}

int		Fixed::float_to_fixed_point( const float number ) {
	return roundf(number * (1 << this->fractional_bits));
}

int		Fixed::toInt( void ) const {
	return this->fixed_point_value >> this->fractional_bits;
}

float	Fixed::toFloat( void ) const {
	return (float)this->fixed_point_value / (1 << this->fractional_bits);
}

std::ostream& operator<<( std::ostream& os, const Fixed& fixed ) {
	os << fixed.toFloat();
	return os;
}