#include "Zombie.hpp"

// clang++ -Wall -Wextra -Werror -std=c++98 Zombie.cpp main.cpp && ./a.out

Zombie*	newZombie( std::string name );
void randomChump( std::string name );

int	main(void) {

	Zombie zombie("Foo");
	zombie.announce();

	Zombie *new_zombie = newZombie("AllocatedFoo");
	new_zombie->announce();

	delete new_zombie;

	return 0;
}
