#include "zombie.hpp"
#include <iostream>

Zombie::Zombie( void ) : name("Zombie")
{
	return ;
}

Zombie::~Zombie( void )
{
	std::cout << this->name << " is dead.. again !" << std::endl;
	return ;
}

void Zombie::announce( void ) const
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void Zombie::randomChump( std::string name )
{
	Zombie	*zombie;

	zombie = newZombie(name);
	zombie->announce();
	delete zombie;
	return ;
}

void Zombie::setName( std::string name )
{
	this->name = name;
	return ;
}