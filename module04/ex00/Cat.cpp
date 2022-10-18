#include <iostream>
#include "Cat.hpp"

// Constructors and destructors
Cat::Cat(): Animal("Cat") {
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& other) {
	std::cout << "Cat Copy constructor called" << std::endl;
	this->_type = other.getType();
} 

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

// Copy Assignment operator overload
Cat&	Cat::operator=(const Cat& other) {
	if (this != &other) {
		this->_type = other.getType();
	}
	return *this;
}

// Custom member functions
void	Cat::makeSound(void) const {
	std::cout << "miauw miauw miauw" << std::endl;
}
