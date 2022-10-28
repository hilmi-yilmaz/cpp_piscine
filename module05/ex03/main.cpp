#include <iostream>
#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void) {

	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");

		std::cout << "name: " << rrf->getName() << std::endl;
		std::cout << "tagret: " << rrf->getTarget() << std::endl;
	}

	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");

		std::cout << "name: " << rrf->getName() << std::endl;
		std::cout << "tagret: " << rrf->getTarget() << std::endl;
	}

	return 0;
}
