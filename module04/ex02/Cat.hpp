#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal {

	private:
		Brain*	_brain;

	public:

		// Constructors and destructors
		Cat();
		Cat(const Cat& other);
		~Cat();

		// Getters
		Brain	*get_brain() const;

		// Copy Assignment operator overload
		Cat&	operator=(const Cat& other);

		// Custom member functions
		void	makeSound(void) const;
};

#endif
