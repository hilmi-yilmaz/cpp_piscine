#include <iostream>
#include "ScavTrap.hpp"

int main(void) {

	ScavTrap b("hilmi");
	b.guardGate();
	std::cout << b << std::endl;
	b.takeDamage(11);
	std::cout << b << std::endl;
	b.guardGate();
	b.attack("ali");

	ScavTrap	c = b;
	std::cout << b.get_name() << std::endl;


	return 0;
}
