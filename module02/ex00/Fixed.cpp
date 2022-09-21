#include <iostream>
#include "Fixed.hpp"

// Initialize the static member of the Fixed class
int Fixed::fractional_bits = 8;

// Default constructor
Fixed::Fixed( void ) : fixed_point_value(0) {
	std::cout << "Default constructor called" << std::endl;
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
	return *this;
}

int Fixed::getRawBits( void ) const {
	return this->fixed_point_value;
}

void	Fixed::setRawBits(int const raw) {
	this->fixed_point_value = raw;
}
