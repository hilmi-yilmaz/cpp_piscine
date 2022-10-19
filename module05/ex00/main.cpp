#include <iostream>
#include "Bureaucrat.hpp"

int	main(void) {

	std::cout << "\nTest1: No exception thrown" << std::endl;
	try {
		Bureaucrat	a("a", 10);
		std::cout << a;
	}
	catch (const Bureaucrat::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\nTest2: Grade is too high" << std::endl;
	try {
		Bureaucrat	b("b", 0);
		std::cout << b;
	}
	catch (const Bureaucrat::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\nTest3: Grade is too low" << std::endl;
	try {
		Bureaucrat	c("c", 151);
		std::cout << c;
	}
	catch (const Bureaucrat::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\nTest4: Grade start oke, but gets to high" << std::endl;
	try {
		Bureaucrat	d("d", 1);
		d.incrementGrade();
		std::cout << d;
	}
	catch (const Bureaucrat::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\nTest5: Grade start oke, but gets to low" << std::endl;
	try {
		Bureaucrat	e("e", 150);
		e.decrementGrade();
		std::cout << e;
	}
	catch (const Bureaucrat::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;
	} catch (const Bureaucrat::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	}


	std::cout << "\nTest6: Copy Contructor" << std::endl;
	Bureaucrat f("hilmi", 77);
	Bureaucrat g(f);
	std::cout << f;
	std::cout << g;

	std::cout << "\nTest7: Copy Assignment operator overload" << std::endl;
	Bureaucrat h("hilmi", 77);
	Bureaucrat i("codam", 99);
	h = i;
	std::cout << h;
	std::cout << i;

	return 0;
}
