#include <iostream>
#include "Animal.hpp"

// Constructors and Destructors
Animal::Animal(): _type("") {
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(std::string type): _type(type) {
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& animal) {
	std::cout << "Animal Copy constructor called" << std::endl;
	this->_type = animal.getType();
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType(void) const {
	return _type;
}

// Copy assignment operator overload
Animal&	Animal::operator=(const Animal& other) {
	if (this != &other) {
		this->_type = other.getType();
	}
	return *this;
}

void	Animal::makeSound(void) const {
	std::cout << "Sound from animal class" << std::endl;
}
