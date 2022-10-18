#include <iostream>
#include "Dog.hpp"

// Constructors and destructors
Dog::Dog(): Animal("Dog") {
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& other) {
	std::cout << "Dog Copy constructor called" << std::endl;
	this->_type = other.getType();
} 

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

// Copy Assignment operator overload
Dog&	Dog::operator=(const Dog& other) {
	if (this != &other) {
		this->_type = other.getType();
	}
	return *this;
}

// Custom member functions
void	Dog::makeSound(void) const {
	std::cout << "bark bark bark" << std::endl;
}
