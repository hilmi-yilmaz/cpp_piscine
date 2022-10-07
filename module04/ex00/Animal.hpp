#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal {

	protected:
		std::string	_type;

	public:
		Animal();
		Animal(std::string type);
		virtual ~Animal();

		// Getters
		std::string	getType(void) const;

		// virtual function.
		virtual void	makeSound(void) const;
};

#endif
