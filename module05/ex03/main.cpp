#include <iostream>
#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void) {

	{
		std::cout << std::endl;
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");

		if (rrf)
		{
			std::cout << "name: " << rrf->getName() << std::endl;
			std::cout << "tagret: " << rrf->getTarget() << std::endl;
		}
	}

	{
		std::cout << std::endl;
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("Roborm", "Bender");

		if (rrf)
		{
			std::cout << "name: " << rrf->getName() << std::endl;
			std::cout << "tagret: " << rrf->getTarget() << std::endl;
		}
	}

	{
		std::cout << std::endl;
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "Hilmi");

		if (rrf)
		{
			std::cout << "name: " << rrf->getName() << std::endl;
			std::cout << "tagret: " << rrf->getTarget() << std::endl;
		}
	}

	return 0;
}
