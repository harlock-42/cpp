#include <string>
#include "zombie.hpp"

void randomChump( std::string name )
{
	Zombie	zombie;

	zombie = Zombie();
	zombie.setName(name);
	zombie.announce();
	return ;
}