#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

// Compilation
// clang++ -Wall -Wextra -Werror -Wpedantic -std=c++98 main.cpp HumanA.cpp HumanB.cpp Weapon.cpp && ./a.out

int	main(void) {

	{
		Weapon	club = Weapon("crude spiked club");

		HumanA	bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon	club = Weapon("crude spiked club");

		HumanB	jim("Jim");
		jim.setWeapon(&club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}

	return 0;
}
