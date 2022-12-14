#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {
	{
		std::cout << "\nTEST1: Test in subject." << std::endl;
		const Animal*	meta = new Animal();
		const Animal*	j = new Dog();
		const Animal*	i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();		// will output the cat sound
		j->makeSound();		// will output the dog sound
		meta->makeSound();	// will output the animal sound

		delete meta;
		delete j;
		delete i;
	}

	{
		
		std::cout << "\nTEST2: Test with wrong animal and cat." << std::endl;
		const WrongAnimal*	wrong_meta = new WrongAnimal();
		const WrongAnimal*	wrong_i = new WrongCat();

		std::cout << wrong_i->getType() << " " << std::endl;
		wrong_i->makeSound();		// will output the wrong animal sound
		wrong_meta->makeSound();	// will output the wrong animal sound

		delete wrong_meta;
		delete wrong_i;
	}
	
	{
		std::cout << "\nTEST3: Basic" << std::endl;
		const Cat*	cat = new Cat();
		const Dog*	dog = new Dog();

		cat->makeSound();
		dog->makeSound();

		delete cat;
		delete dog;
	}

	return 0;
}
