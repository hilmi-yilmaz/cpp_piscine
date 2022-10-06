#include <iostream>
#include "FragTrap.hpp"

int main(void) {

	FragTrap b("hilmi");
	b.highFiveGuys();
	std::cout << b << std::endl;
	b.takeDamage(11);
	std::cout << b << std::endl;
	b.highFiveGuys();
	b.attack("ali");
	return 0;
}
