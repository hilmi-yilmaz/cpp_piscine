#include <iostream>
#include "Bureaucrat.hpp"

// Constructors and destructors
Bureaucrat::Bureaucrat() {
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name) {
	std::cout << "Bureaucrat Parametrized Constructor called" << std::endl;

	if (grade < 1) {
		throw Bureaucrat::GradeTooHighException();
	} else if (grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other.getName()), _grade(other.getGrade()) {
	std::cout << "Bureaucrat Copy Constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat Destructor called" << std::endl;
}

// Copy Assignment operator overload
Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& other) {
	if (this != &other) {
		this->_grade = other.getGrade();
	}
	return *this;
}

// Getters
std::string	Bureaucrat::getName() const {
	return this->_name;
}

unsigned int	Bureaucrat::getGrade() const {
	return this->_grade;
}

// Custom member functions
void	Bureaucrat::incrementGrade() {
	if (this->_grade - 1 < 1) {
		throw Bureaucrat::GradeTooHighException();
	}
	_grade--;
}

void	Bureaucrat::decrementGrade() {
	if (this->_grade + 1 > 150) {
		throw GradeTooLowException();
	}
	_grade++;
}

// Insertion operator overload
std::ostream&	operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "." << std::endl;
	return os;
}
