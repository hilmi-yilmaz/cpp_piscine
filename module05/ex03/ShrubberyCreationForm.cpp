#include <fstream>
#include <exception>
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

// Constructors and destructors
ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137, "") {
	std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137, target) {
	std::cout << "ShrubberyCreationForm Parametrized constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : Form("ShrubberyCreationForm", other.getGradeToSign(), other.getGradeToExecute(), other.getTarget()) {
	std::cout << "ShrubberyCreationForm Copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm deconstructor called" << std::endl;
}

// Copy Assignment operator overload
ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
	(void)other;
	return *this;
}

// Custom member functions
void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const {
	
	// Will throw an exception if the executor cannot execute the form.
	this->canExecute(executor);

	// Open file
	std::ofstream	target_file (this->getTarget() + "_shrubbery");
	if (!target_file.is_open()) {
		std::cout << "Error opening file: " << this->getTarget() + "_shrubbery" << std::endl;
		return;
	}

	// Execute the action (create an ascii tree)
	target_file << "\
        ###\n\
       #o###\n\
     #####o###\n\
    #o#\\#|#/###\n\
     ###\\|/#o#\n\
      # }|{  #\n\
 ejm97  }|{" << std::endl;

	target_file.close();
	std::cout << this->getTarget() + "_shrubbery" << " file created with an ascii tree in it!" << std::endl;
}

// Insertion operator overload
std::ostream&	operator<<(std::ostream& os, const ShrubberyCreationForm& form) {
	os << form.getName() << ", form is signed: " << form.getIsSigned() << ", form grade to sign: " << form.getGradeToSign() << ", form grade to execute: " << form.getGradeToExecute() << ", target is: " << form.getTarget() << std::endl;
	return os;
}
