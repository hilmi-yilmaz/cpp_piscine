#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void) {

	// ShrubberyCreationForm
	std::cout << "\nShrubberyCreationForm" << std::endl;
	{
		std::cout << "Test1: Bureaucrat can sign and execute form" << std::endl;
		ShrubberyCreationForm form("target");
		Bureaucrat bureaucrat("bureaucrat", 15);
		bureaucrat.signForm(form);
		bureaucrat.executeForm(form);
	}

	{
		std::cout << "\nTest2: Bureacrat cannot sign and execute form" << std::endl;
		ShrubberyCreationForm form("target");
		Bureaucrat bureaucrat("bureaucrat", 150);
		bureaucrat.signForm(form);
		bureaucrat.executeForm(form);
	}

	{
		std::cout << "\nTest3: Bureacrat can sign but cannot execute form" << std::endl;
		ShrubberyCreationForm form("target");
		Bureaucrat bureaucrat("bureaucrat", 140);
		bureaucrat.signForm(form);
		bureaucrat.executeForm(form);
	}

	// RobotomyRequestForm
	std::cout << "\nRobotomyRequestForm" << std::endl;
	{
		std::cout << "Test1: Bureacrat can sign and execute form" << std::endl;
		RobotomyRequestForm form("target");
		Bureaucrat bureaucrat("bureaucrat", 15);
		bureaucrat.signForm(form);
		bureaucrat.executeForm(form);
	}

	{
		std::cout << "\nTest2: Bureacrat cannot sign and execute form" << std::endl;
		RobotomyRequestForm form("target");
		Bureaucrat bureaucrat("bureaucrat", 150);
		bureaucrat.signForm(form);
		bureaucrat.executeForm(form);
	}

	{
		std::cout << "\nTest3: Bureacrat can sign but cannot execute form" << std::endl;
		RobotomyRequestForm form("target");
		Bureaucrat bureaucrat("bureaucrat", 140);
		bureaucrat.signForm(form);
		bureaucrat.executeForm(form);
	}

	// RobotomyRequestForm
	std::cout << "\nPresidentialPardonForm" << std::endl;
	{
		std::cout << "Test1: Bureacrat can sign and execute form" << std::endl;
		PresidentialPardonForm form("target");
		Bureaucrat bureaucrat("bureaucrat", 3);
		bureaucrat.signForm(form);
		bureaucrat.executeForm(form);
	}

	{
		std::cout << "\nTest2: Bureacrat cannot sign and execute form" << std::endl;
		PresidentialPardonForm form("target");
		Bureaucrat bureaucrat("bureaucrat", 150);
		bureaucrat.signForm(form);
		bureaucrat.executeForm(form);
	}

	{
		std::cout << "\nTest3: Bureacrat can sign but cannot execute form" << std::endl;
		PresidentialPardonForm form("target");
		Bureaucrat bureaucrat("bureaucrat", 10);
		bureaucrat.signForm(form);
		bureaucrat.executeForm(form);
	}

	return 0;
}
