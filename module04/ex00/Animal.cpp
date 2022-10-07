#include <iostream>
#include "Animal.hpp"

// Constructors and Destructors
Animal::Animal(): _type("") {
	std::cout << "Animal constructor called." << std::endl;
}

Animal::Animal(std::string type): _type(type) {
	std::cout << "Animal constructor called." << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor called." << std::endl;
}

std::string Animal::getType(void) const {
	return _type;
}

void	Animal::makeSound(void) const {
	std::cout << "Sound from animal class" << std::endl;
}

