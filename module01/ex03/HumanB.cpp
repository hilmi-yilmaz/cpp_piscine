#include <iostream>
#include <string>
#include "HumanB.hpp"


HumanB::HumanB( std::string name ) : _name(name) {
}

HumanB::~HumanB() {
}

void	HumanB::attack( void ) {
	std::cout << _name << " attacks with their " << (*_weapon).getType() << std::endl;
}

void	HumanB::setWeapon( Weapon &weapon ) {
	this->_weapon = &weapon;
}
