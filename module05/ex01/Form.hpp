#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>

# include "Bureaucrat.hpp"

class Form {

	public:

		// Constructors and destructors
		Form();
		Form(std::string name, unsigned int grade_to_sign, unsigned int grade_to_execute);
		Form(const Form& other);
		~Form();

		// Copy assignment operator overload
		Form&	operator=(const Form& other);

		// Getters
		std::string		getName() const;
		bool			getIsSigned() const;
		unsigned int	getGradeToSign() const;
		unsigned int	getGradeToExecute() const;
		
		// Custom member functions
		void			beSigned(const Bureaucrat& bureaucrat);

		// Exceptions
		class GradeTooHighException {
			public:
				virtual const char* what() const throw() {
					return ("Grade too high, should be between 1 and 150 (both inclusive).");
				}
		};

		class GradeTooLowException {
			public:
				virtual const char* what() const throw() {
					return ("Grade too low, should be between 1 and 150 (both inclusive).");
				}
		};

	private:
		const std::string	_name;
		bool				_is_signed;
		const unsigned int	_grade_to_sign;
		const unsigned int	_grade_to_execute;	
};

// Insertion operator overload
std::ostream&	operator<<(std::ostream& os, const Form& form);

#endif
