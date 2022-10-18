#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal {

	protected:
		std::string	_type;

	public:

		// Constructors and destructors
		Animal();
		Animal(std::string type);
		Animal(const Animal& animal);
		virtual ~Animal();

		// Copy assignment operator overload
		Animal& operator=(const Animal& other);

		// Getters
		std::string	getType(void) const;

		// Custom member functions
		virtual void	makeSound(void) const = 0;
};

#endif
