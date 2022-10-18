#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal {

	private:
		Brain*	_brain;

	public:

		// Constructors and destructors
		Dog();
		Dog(const Dog& other);
		~Dog();

		// Copy assignment operator overload
		Dog& operator=(const Dog& other);

		// Getters
		Brain	*get_brain() const;

		// Custom member functions
		void	makeSound(void) const;
};

#endif
