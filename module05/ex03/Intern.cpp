#include "Intern.hpp"

// Constructors and destructors
Intern::Intern() {
	std::cout << "Intern Default constructor called" << std::endl;
}

Intern::Intern(const Intern& other) {
	std::cout << "Intern Parametrized constructor called" << std::endl;
}