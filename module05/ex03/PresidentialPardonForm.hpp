#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>

# include "Form.hpp"

class PresidentialPardonForm : public Form {

	public:

		// Constructors and destructors
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm& other);
		~PresidentialPardonForm();

		// Custom member function
		void	execute(Bureaucrat const& executor) const;

	private:

		// Copy Assignment operator overload
		PresidentialPardonForm&	operator=(const PresidentialPardonForm& other);

};

// Insertion operator overload
std::ostream&	operator<<(std::ostream& os, const PresidentialPardonForm& form);

#endif
