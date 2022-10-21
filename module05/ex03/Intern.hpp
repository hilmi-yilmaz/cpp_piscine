#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>

# include "Form.hpp"

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

#endif