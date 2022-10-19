#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

# include "Form.hpp"

class Bureaucrat {

	public:

		// Constructors and destructors
		Bureaucrat(std::string name, unsigned int grade);
		Bureaucrat(const Bureaucrat& other);
		~Bureaucrat();

		// Copy assignment operator overload
		Bureaucrat& operator=(const Bureaucrat& other);

		// Getters
		std::string		getName() const;
		unsigned int	getGrade() const;

		// Custom member functions
		void	incrementGrade();
		void	decrementGrade();
		void	signForm(Form& form);

		class GradeTooHighException: public std::exception {
			public:
				virtual const char* what() const throw() {	// throw means what it wil throw something
					return ("Grade too high, should be between 1 and 150 (both inclusive).");
				}
		};

		class GradeTooLowException: public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("Grade too low, should be between 1 and 150 (both inclusive).");
				}
		};


	private:
		const std::string	_name;
		unsigned int		_grade;

		// Constructor
		Bureaucrat();

};

// Insertion operator overload
std::ostream&	operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif
