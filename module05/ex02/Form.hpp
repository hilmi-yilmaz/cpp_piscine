#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include <exception>

class Bureaucrat;

class Form {

	public:

		// Constructors and destructors
		Form();
		Form(std::string name, unsigned int grade_to_sign, unsigned int grade_to_execute, std::string target);
		Form(const Form& other);
		virtual ~Form();

		// Getters
		std::string		getName() const;
		bool			getIsSigned() const;
		unsigned int	getGradeToSign() const;
		unsigned int	getGradeToExecute() const;
		std::string		getTarget() const;

		// Custom member functions
		virtual void	beSigned(const Bureaucrat& bureaucrat);
		virtual void	execute(Bureaucrat const& executor) const = 0;	// Pure virtual function

		// Exceptions
		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw() {
					return ("Grade too high, should be between 1 and 150 (both inclusive).");
				}
		};

		class GradeTooLowException : public std::exception  {
			public:
				virtual const char* what() const throw() {
					return ("Grade too low, should be between 1 and 150 (both inclusive).");
				}
		};

		class FormNotsignedException : public std::exception  {
			public:
				virtual const char* what() const throw() {
					return ("Form is not signed!");
				}
		};

	protected:
		void	_canExecute(Bureaucrat const& executor) const;

	private:
		const std::string	_name;
		bool				_is_signed;
		const unsigned int	_grade_to_sign;
		const unsigned int	_grade_to_execute;
		const std::string	_target;

		// Copy assignment operator overload
		Form&	operator=(const Form& other);

		bool	_gradeIsLow(Bureaucrat const& executor) const;

};

// Insertion operator overload
std::ostream&	operator<<(std::ostream& os, const Form& form);

#endif
