#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>

# include "Form.hpp"

class RobotomyRequestForm : public Form {

	public:

		// Constructors and destructors
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& other);
		~RobotomyRequestForm();

		// Custom member function
		void	execute(Bureaucrat const& executor) const;

	private:

		// Copy Assignment operator overload
		RobotomyRequestForm&	operator=(const RobotomyRequestForm& other);

};

// Insertion operator overload
std::ostream&	operator<<(std::ostream& os, const RobotomyRequestForm& form);

#endif
