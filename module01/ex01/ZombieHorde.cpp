#include "zombie.hpp"
#include <string>

Zombie*		zombieHorde(int N, std::string name)
{
	(void)name;
	Zombie *zombie_horde;

	zombie_horde = new Zombie[N];
	for (int i = 0; i < N; ++i)
		zombie_horde[i].setName(name);
	return (zombie_horde);
}