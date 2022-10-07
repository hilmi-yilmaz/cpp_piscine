#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>

class WrongAnimal {

	protected:
		std::string	_type;

	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		~WrongAnimal();

		// Getters
		std::string	getType(void) const;

		void	makeSound(void) const;
};

#endif
