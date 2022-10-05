#include "Zombie.hpp"

int	main(void) {

	Zombie zombie("Foo");
	zombie.announce();

	randomChump("random chump");

	Zombie *new_zombie = newZombie("AllocatedFoo");
	new_zombie->announce();
	delete new_zombie;

	return 0;
}
