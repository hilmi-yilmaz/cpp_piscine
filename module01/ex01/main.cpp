#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name );

int	main(void) {

	const int	N = 8;
	Zombie *horde = zombieHorde(N, "HilmiY");

	for (int i = 0; i < N; i++) {
		horde[i].announce();
	}

	delete[] horde;

	return 0;
}
