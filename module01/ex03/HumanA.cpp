#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon), name(name) {
}

HumanA::~HumanA() {
}

void	HumanA::attack( void ) {

	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
