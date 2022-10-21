#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>

# include "Form.hpp"

class ShrubberyCreationForm : public Form {

	public:

		// Constructors and destructors
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& other);
		~ShrubberyCreationForm();

		// Custom member function
		void	execute(Bureaucrat const& executor) const;

	private:

		// Copy Assignment operator overload
		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& other);
};

// Insertion operator overload
std::ostream&	operator<<(std::ostream& os, const ShrubberyCreationForm& form);

#endif
