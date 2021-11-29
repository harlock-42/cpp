#include <iostream>
#include "zombie.hpp"

int		main()
{
	Zombie *zombie;
	int		nb_zombie = 3;

	zombie = zombieHorde(nb_zombie, "Marcel");
	for (int i = 0; i < nb_zombie; ++i)
		zombie[i].announce();
	delete [] zombie;
	return (0);
}