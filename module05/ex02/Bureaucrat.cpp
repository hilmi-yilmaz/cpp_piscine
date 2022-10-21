#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

// Constructors and destructors
Bureaucrat::Bureaucrat() : _name("NoName"), _grade(150) {
	std::cout << "Bureaucrat Default Constructor called" << std::endl;
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
	std::cout << "Bureaucrat Destructor called for "<< _name << std::endl;
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

void	Bureaucrat::signForm(Form& form) {
	try {
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	}
	catch(Form::GradeTooLowException& e) {
		std::cout << this->_name << " couldn’t sign " << form.getName() << " because grade too low." << std::endl;
	}
}

void	Bureaucrat::executeForm(Form const& form) {
	try {
		form.execute(*this);
	} catch (Form::GradeTooLowException& e) {
		std::cout << "Grade too low to execute the form!" << std::endl;
		return;
	} catch (Form::FormNotsignedException& e) {
		std::cout << "The form is not signed yet, so cannot execute it!" << std::endl;
		return;
	}
	std::cout << this->_name << " executed " << form.getName() << std::endl;
}

// Insertion operator overload
std::ostream&	operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "." << std::endl;
	return os;
}
