#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

int	main(void) {

	ShrubberyCreationForm a("Target");

	std::cout << a;

	Bureaucrat b("hilmi", 150);

	try {

		a.execute(b);
	} catch (ShrubberyCreationForm::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;
	} catch (ShrubberyCreationForm::FormNotsignedException& e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
