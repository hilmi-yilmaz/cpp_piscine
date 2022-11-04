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

// Copy assignment operator overload
Animal&	Animal::operator=(const Animal& other) {
	std::cout << "Animal Copy Assignment constructor called" << std::endl;
	if (this != &other) {
		this->_type = other.getType();
	}
	return *this;
}

// Getters
std::string Animal::getType(void) const {
	return _type;
}

// Custom member functions
void	Animal::makeSound(void) const {
	std::cout << "Sound from animal class" << std::endl;
}
