#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {

	public:

		// Constructors and destructors
		Intern();
		Intern(const Intern& other);
		~Intern();

		// Copy assignment operator overload
		Intern&	operator=(const Intern& other);

		// Custom member functions
		Form*	makeForm(std::string form_name, std::string form_target);

};

Form*	createShrubberyForm(std::string form_target);
Form*	createRobotomyForm(std::string form_target);
Form*	createPresidentialForm(std::string form_target);


#endif
