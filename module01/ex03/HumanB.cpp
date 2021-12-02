#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name), _weapon(NULL)
{
	return ;
}

HumanB::~HumanB( void )
{
	return ;
}

void	HumanB::attack( void ) const
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
	return ;
}

void	HumanB::setWeapon( Weapon weapon )
{
	this->_weapon = &weapon;
	return ;
}