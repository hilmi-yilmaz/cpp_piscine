#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain {

	private:
		std::string _ideas[100];

	public:

		// Constructors and destructors
		Brain();
		Brain(const Brain& brain);
		~Brain();

		// Copy assignment operator overload
		Brain&	operator=(const Brain& other);

		// Getters
		std::string	*get_ideas();

		// Setters
		void	set_ideas(std::string idea);

};

#endif
