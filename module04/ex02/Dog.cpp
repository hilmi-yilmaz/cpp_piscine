#include <iostream>
#include "Dog.hpp"

// Constructors and destructors
Dog::Dog(): Animal("Dog") {

	std::cout << "Dog constructor called" << std::endl;
	_brain = new Brain();
}

Dog::Dog(const Dog& other) {
	std::cout << "Dog Copy constructor called" << std::endl;
	this->_type = other.getType();
	this->_brain = new Brain();
	*(this->_brain) = *(other._brain);
}

Dog::~Dog() {
	delete _brain;
	std::cout << "Dog destructor called" << std::endl;
}

// Copy assignment operator overload
Dog&	Dog::operator=(const Dog& other) {
	std::cout << "Dog Copy Assignment called" << std::endl;
	if (this != &other) {
		this->_type = other.getType();
		this->_brain = new Brain();
		*(this->_brain) = *(other.get_brain());
	}
	return *this;
}

// Getters
Brain	*Dog::get_brain() const {
	return _brain;
}

// Custom member functions
void	Dog::makeSound(void) const {
	std::cout << "bark bark bark" << std::endl;
}
