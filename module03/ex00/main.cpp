#include <iostream>
#include "ClapTrap.hpp"

int main(void) {

	{
		ClapTrap a ("hilmi");
		std::cout << a << std::endl;

		a.attack("ali");
		std::cout << a << std::endl;

		a.takeDamage(15);
		std::cout << a << std::endl;

		a.beRepaired(20);
		std::cout << a << std::endl;

		// No name given
		ClapTrap b;
	}

	{
		std::cout << std::endl;
		ClapTrap a ("hilmi");
		std::cout << a << std::endl;

		a.attack("ali");
		std::cout << a << std::endl;

		a.takeDamage(1);
		std::cout << a << std::endl;

		a.beRepaired(20);
		std::cout << a << std::endl;

		// No name given
		ClapTrap b;
	}

	return 0;
}
