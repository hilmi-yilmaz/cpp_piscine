#include <iostream>
#include "WrongAnimal.hpp"

// Constructors and Destructors
WrongAnimal::WrongAnimal(): _type("") {
	std::cout << "WrongAnimal constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): _type(type) {
	std::cout << "WrongAnimal constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called." << std::endl;
}

std::string WrongAnimal::getType(void) const {
	return _type;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "Sound from WrongAnimal class" << std::endl;
}

