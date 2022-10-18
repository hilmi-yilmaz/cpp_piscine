#include <iostream>
#include "Brain.hpp"

// Constructors and destructors
Brain::Brain() {
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& brain) {
	std::cout << "Brain Copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++) {
		this->_ideas[i] = brain._ideas[i];
	}
}

Brain::~Brain() {
	std::cout << "Brain destructor called " << std::endl;
}

// Copy assignment operator overload
Brain&	Brain::operator=(const Brain& other) {
	std::cout << "Brain Copy Assignment constructor called" << std::endl;
	if (this != &other) {
		for (int i = 0; i < 100; i++) {
			this->_ideas[i] = other._ideas[i];
		}
	}
	return *this;
}

// Getters
std::string	*Brain::get_ideas() {
	return _ideas;
}

// Setters
void	Brain::set_ideas(std::string idea) {
	for (unsigned int i = 0; i < 100; i++) {
		_ideas[i] = idea;
	}
}
