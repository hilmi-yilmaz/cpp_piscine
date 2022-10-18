#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal {

	public:
		// Constructors and destructors
		Cat();
		Cat(const Cat& other);
		~Cat();

		// Copy Assignment operator overload
		Cat&	operator=(const Cat& other);

		// Custom member functions
		void	makeSound(void) const;
};

#endif
