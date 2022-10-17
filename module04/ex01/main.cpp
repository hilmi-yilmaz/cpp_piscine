#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define ARRAY_SIZE 2

int main(void) {

	{
		std::cout << "TEST 1: Given in exercise:" << std::endl;
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		delete j;//should not create a leak
		delete i;
	}

	{
		std::cout << "\nTEST 2: Array of Animal objects" << std::endl;
		Animal*	animals[ARRAY_SIZE];

		for (unsigned int i = 0; i < ARRAY_SIZE / 2; i++) {
			animals[i] = new Dog();
		}

		for (unsigned int i = ARRAY_SIZE / 2; i < ARRAY_SIZE; i++) {
			animals[i] = new Cat();
		}

		for (unsigned int i = 0; i < ARRAY_SIZE; i++) {
			delete animals[i];
		}
	}

	{
		std::cout << "\nTEST 3: Deep and Shallow copies" << std::endl;

		Dog dog1;
		dog1.get_brain()->set_ideas("hilmi");
		std::cout << dog1.get_brain()->get_ideas()[0] << std::endl;
		std::cout << dog1.get_brain()->get_ideas()[99] << std::endl;

		Dog dog2(dog1);
		std::cout << dog2.get_brain()->get_ideas()[0] << std::endl;
		std::cout << dog2.get_brain()->get_ideas()[99] << std::endl;
	}

	{
		std::cout << "\nTEST 4: Operator overload inheritance" << std::endl;
		Dog dog1;
		Dog	dog2 = dog1;

		std::cout << "dog1: " << dog1.getType() << std::endl;
		std::cout << "dog2: " << dog2.getType() << std::endl;

	}

	return 0;
}
