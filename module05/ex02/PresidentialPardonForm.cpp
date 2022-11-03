#include <fstream>
#include <exception>
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include <time.h>
#include <stdlib.h>

// Constructors and destructors
PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5, "") {
	std::cout << "PresidentialPardonForm Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5, target) {
	std::cout << "PresidentialPardonForm Parametrized constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : Form("PresidentialPardonForm", other.getGradeToSign(), other.getGradeToExecute(), other.getTarget()) {
	std::cout << "PresidentialPardonForm Copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm deconstructor called" << std::endl;
}

// Copy Assignment operator overload
PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
	(void)other;
	return *this;
}

// Custom member functions
void	PresidentialPardonForm::execute(Bureaucrat const& executor) const {
	
	// Will throw an exception if the executor cannot execute the form.
	this->_canExecute(executor);
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

// Insertion operator overload
std::ostream&	operator<<(std::ostream& os, const PresidentialPardonForm& form) {
	os << form.getName() << ", form is signed: " << form.getIsSigned() << ", form grade to sign: " << form.getGradeToSign() << ", form grade to execute: " << form.getGradeToExecute() << ", target is: " << form.getTarget() << std::endl;
	return os;
}
