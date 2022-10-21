#include <fstream>
#include <exception>
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <time.h>
#include <stdlib.h>

// Constructors and destructors
RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45, "") {
	std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45, target) {
	std::cout << "RobotomyRequestForm Parametrized constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : Form("RobotomyRequestForm", other.getGradeToSign(), other.getGradeToExecute(), other.getTarget()) {
	std::cout << "RobotomyRequestForm Copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm deconstructor called" << std::endl;
}

// Copy Assignment operator overload
RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
	(void)other;
	return *this;
}

// Custom member functions
void	RobotomyRequestForm::execute(Bureaucrat const& executor) const {
	
	// Will throw an exception if the executor cannot execute the form.
	this->canExecute(executor);

	std::cout << "Makes some drilling noises" << std::endl;

	srand(time(NULL));
	int	random = rand() % 10;
	if (random >= 5) {
		std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
 	} else {
		std::cout << this->getTarget() << " robotomy failed" << std::endl;
	}
}

// Insertion operator overload
std::ostream&	operator<<(std::ostream& os, const RobotomyRequestForm& form) {
	os << form.getName() << ", form is signed: " << form.getIsSigned() << ", form grade to sign: " << form.getGradeToSign() << ", form grade to execute: " << form.getGradeToExecute() << ", target is: " << form.getTarget() << std::endl;
	return os;
}
