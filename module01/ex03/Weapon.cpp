#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type(type)
{
	std::cout << "Weapon is created" << std::endl;
	return ;
}

Weapon::~Weapon( void )
{
	std::cout << "Weapon is destroyed" << std::endl;
	return ;
}

std::string const	&Weapon::getType( void ) const
{
	std::string const	&ref_type = this->_type;
	return (ref_type);
}

void				Weapon::setType( std::string type)
{
	this->_type = type;
	return ;
}