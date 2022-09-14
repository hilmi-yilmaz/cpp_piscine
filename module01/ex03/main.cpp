#include <iostream>
#include "Weapon.hpp"

int	main(void) {

	Weapon	weapon;

	weapon.setType("1");
	weapon.setType("2");

	std::cout << weapon.getType() << std::endl;

	return 0;

}