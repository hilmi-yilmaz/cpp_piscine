#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>

class WrongAnimal {

	protected:
		std::string	_type;

	public:

		// Constructors and destructors
		WrongAnimal();
		WrongAnimal(std::string type);
		virtual ~WrongAnimal();

		// Copy assignment operator overload
		WrongAnimal& operator=(const WrongAnimal& other);

		// Getters
		std::string	getType(void) const;

		void	makeSound(void) const;
};

#endif
