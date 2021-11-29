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

void Zombie::setName( std::string name )
{
	this->name = name;
	return ;
}