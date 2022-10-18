#include <iostream>
#include "WrongCat.hpp"

// Constructors and destructors
WrongCat::WrongCat(): WrongAnimal("Cat") {
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) {
	std::cout << "WrongCat Copy constructor called" << std::endl;
	this->_type = other.getType();
} 

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}

// Copy Assignment operator overload
WrongCat&	WrongCat::operator=(const WrongCat& other) {
	if (this != &other) {
		this->_type = other.getType();
	}
	return *this;
}

// Custom member functions
void	WrongCat::makeSound(void) const {
	std::cout << "miauw miauw miauw" << std::endl;
}
