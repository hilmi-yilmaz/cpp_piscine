#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie( void ) : _name("") {
}

Zombie::Zombie( std::string name ) :_name(name) {
}

Zombie::~Zombie( void ) {
	std::cout << "Destructor called for zombie " << _name << std::endl;
}


void	Zombie::announce( void ) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
