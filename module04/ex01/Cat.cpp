#include <iostream>
#include "Cat.hpp"

// Constructors and destructors
Cat::Cat(): Animal("Cat") {

	std::cout << "Cat constructor called" << std::endl;
	_brain = new Brain();
}

Cat::Cat(const Cat& other) {
	std::cout << "Cat Copy constructor called" << std::endl;
	this->_type = other.getType();
	this->_brain = new Brain();
	*(this->_brain) = *(other._brain);
}

Cat::~Cat() {
	delete _brain;
	std::cout << "Cat destructor called" << std::endl;
}

// Copy Assignment operator overload
Cat&	Cat::operator=(const Cat& other) {
	std::cout << "Cat Copy Assignment called" << std::endl;
	if (this != &other) {
		this->_type = other.getType();
		this->_brain = new Brain();
		*(this->_brain) = *(other.get_brain());
	}
	return *this;
}

// Getters
Brain	*Cat::get_brain() const {
	return _brain;
}

// Custom member functions
void	Cat::makeSound(void) const {
	std::cout << "miauw miauw miauw" << std::endl;
}
