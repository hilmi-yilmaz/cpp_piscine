#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

// Constructors and destructors
Form::Form() : _name("NoName"), _is_signed(false), _grade_to_sign(150), _grade_to_execute(150) {
	std::cout << "Form Default constructor called" << std::endl;
}

Form::Form(std::string name, unsigned int grade_to_sign, unsigned int grade_to_execute): _name(name), _is_signed(false), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute) {
	std::cout << "Form Parametrized constructor called" << std::endl;
	if (grade_to_sign < 1) {
		throw GradeTooHighException();
	} else if (grade_to_sign > 150) {
		throw GradeTooLowException();
	}

	if (grade_to_execute < 1) {
		throw GradeTooHighException();
	} else if (grade_to_execute > 150) {
		throw GradeTooLowException();
	}
}

Form::Form(const Form& other) : _name(other.getName()), _grade_to_sign(other.getGradeToSign()), _grade_to_execute(other.getGradeToExecute()) {
	std::cout << "Form Copy constructor called" << std::endl;
	this->_is_signed = other.getIsSigned();
}

Form::~Form() {
	std::cout << "Form Destructor called from " << this->_name << std::endl;
}

// Copy assignment operator overload
Form&	Form::operator=(const Form& other) {
	if (this != &other) {
		this->_is_signed = other.getIsSigned();
	}
	return *this;
}

// Getters
std::string	Form::getName() const {
	return this->_name;
}

bool	Form::getIsSigned() const {
	return this->_is_signed;
}

unsigned int	Form::getGradeToSign() const {
	return _grade_to_sign;
}

unsigned int	Form::getGradeToExecute() const {
	return _grade_to_execute;
}

// Custom member functions
void	Form::beSigned(const Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() > this->_grade_to_sign) {
		throw GradeTooLowException();
	}
	this->_is_signed = true;
}

// Insertion operator overload
std::ostream&	operator<<(std::ostream& os, const Form& form) {
	os << form.getName() << ", form is signed: " << form.getIsSigned() << ", form grade to sign: " << form.getGradeToSign() << ", form grade to execute: " << form.getGradeToExecute() << std::endl;
	return os;
}
