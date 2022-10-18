#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void) {

	{
		std::cout << "\nTEST1: Create Dog and Cat" << std::endl;

		Cat	cat;
		Dog	dog;

		cat.makeSound();
		dog.makeSound();
	}

	// {
	// 	// Compile error, uncomment to check
	// 	std::cout << "\nTEST2: Cannot create an instance of Animal" << std::endl;
	// 	Animal animal;
	// }

	{
		// This make use of run-time polymorphism to select the correct function to execute.
		// In this case, it should execute the makeSound() function of Dog.
		std::cout << "\nTEST3: Can create a pointer to Animal" << std::endl;

		Animal*	dog = new Dog();

		dog->makeSound();

		delete dog;
	}

	return 0;
}
