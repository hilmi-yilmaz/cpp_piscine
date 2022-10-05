#include <iostream>
#include "Fixed.hpp"

// Initialize the static member of the Fixed class
int Fixed::_fractional_bits = 8;

// Default constructor
Fixed::Fixed( void ) : _fixed_point_value(0) {
	std::cout << "Default constructor called" << std::endl;
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
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed_point_value;
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed_point_value = raw;
}
