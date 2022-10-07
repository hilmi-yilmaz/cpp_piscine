#include <iostream>
#include "Cat.hpp"

Cat::Cat(): Animal("Cat") {
	std::cout << "Cat constructor called." << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destructor called." << std::endl;
}

void	Cat::makeSound(void) const {
	std::cout << "miauw miauw miauw" << std::endl;
}
