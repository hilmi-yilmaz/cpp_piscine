#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

// Constructors and destructors
Intern::Intern() {
	std::cout << "Intern Default constructor called" << std::endl;
}

Intern::Intern(const Intern& other) {
	std::cout << "Intern Copy constructor called" << std::endl;
	(void)other;
}

Intern::~Intern() {
	std::cout << "Intern Destructor called" << std::endl;
}

// Copy assignment operator overload
Intern&	Intern::operator=(const Intern& other) {
	(void)other;
	return *this;
}

// Custom member function
Form*	Intern::makeForm(std::string form_name, std::string form_target) {

	std::string	available_names[] = {"RobotomyRequestForm", "PresidentialPardonForm", "ShrubberyCreationForm"};
	Form*	(*createFormArray[3])(std::string) = {createRobotomyForm, createPresidentialForm, createShrubberyForm};

	for (unsigned int i = 0; i < 3; i++) {
		if (form_name == available_names[i]) {
			Form* form = (*createFormArray[i])(form_target);
			std::cout << "Intern creates " << form_name << std::endl;
			return form;
		}
	}
	std::cout << "Form with name " << form_name << " does not exist" << std::endl;
	return NULL;
}
