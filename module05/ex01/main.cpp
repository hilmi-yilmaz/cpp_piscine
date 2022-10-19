#include <iostream>
#include "Form.hpp"

int	main(void) {

	std::cout << "\nTest1: Correct Form" << std::endl;
	try {
		Form a("a", 10, 10);
		std::cout << a;
	}
	catch(const Form::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}
	catch(const Form::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\nTest2: Too high grade_to_sign" << std::endl;
	try {
		Form a("a", 0, 10);
		std::cout << a;
	}
	catch(const Form::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}
	catch(const Form::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\nTest3: Too low grade_to_execute" << std::endl;
	try {
		Form a("a", 10, 151);
		std::cout << a;
	}
	catch(const Form::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}
	catch(const Form::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\nTest4: Sign a form" << std::endl;
	try {
		Bureaucrat bureaucrat("bureaucrat", 5);
		Form form("form", 10, 10);
		std::cout << form;
		form.beSigned(bureaucrat);
		std::cout << form;
	}
	catch (const Form::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\nTest5: Sign a form grade to low" << std::endl;
	try {
		Bureaucrat bureaucrat("bureaucrat", 15);
		Form form("form", 10, 10);
		std::cout << form;
		form.beSigned(bureaucrat);
		std::cout << form;
	}
	catch (const Form::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\nTest6: Bureaucrat signs a form" << std::endl;
	try {
		Bureaucrat bureaucrat("bureaucrat", 5);
		Form form("form", 10, 10);
		bureaucrat.signForm(form);
		std::cout << form;
	}
	catch (const Form::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
