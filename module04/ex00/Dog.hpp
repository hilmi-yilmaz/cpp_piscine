#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal {

	public:
		// Constructors and destructors
		Dog();
		Dog(const Dog& other);
		~Dog();

		// Copy assignment operator overload
		Dog&	operator=(const Dog& other);

		// Custom member functions
		void	makeSound(void) const;
};

#endif
