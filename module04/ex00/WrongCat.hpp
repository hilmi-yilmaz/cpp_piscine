#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {


	public:
		// Constructors and destructors
		WrongCat();
		WrongCat(const WrongCat& other);
		~WrongCat();

		// Copy Assignment operator overload
		WrongCat&	operator=(const WrongCat& other);

		// Custom member functions
		void	makeSound(void) const;
};

#endif
