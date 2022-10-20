#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

// Constructors and destructors
ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137),  _target("") {
	std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target) {
	std::cout << "ShrubberyCreationForm Parametrized constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : Form("ShrubberyCreationForm", other.getGradeToSign(), other.getGradeToExecute()) {
	// this->_is_signed = other.getIsSigned();
	this->_target = other.getTarget();
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm deconstructor called" << std::endl;
}

// Copy Assignment operator overload
ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
	(void)other;
	return *this;
}

// Getters
std::string	ShrubberyCreationForm::getTarget() const {
	return this->_target;
}

// Custom member functions
void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const {

	if (!this->getIsSigned()) {
		throw FormNotsignedException();
	}
	if (this->getGradeToExecute() < executor.getGrade()) {
		throw GradeTooLowException();
	}

	// Execute the action (create an ascii tree)
	std::cout << _target << " executes stuff" << std::endl;
}

// Insertion operator overload
std::ostream&	operator<<(std::ostream& os, const ShrubberyCreationForm& form) {
	os << form.getName() << ", form is signed: " << form.getIsSigned() << ", form grade to sign: " << form.getGradeToSign() << ", form grade to execute: " << form.getGradeToExecute() << ", target is: " << form.getTarget() << std::endl;
	return os;
}
