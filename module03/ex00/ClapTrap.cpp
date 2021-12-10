#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDammage(0)
{
	std::cout << name << " is ready to fight" << std::endl;
	std::cout << "Hitpoints = " << this->_hitPoints << std::endl;
	std::cout << "Energy Points = " << this->_energyPoints << std::endl;
	std::cout << "Attack Dammage = " << this->_attackDammage << std::endl;
	std::cout << std::endl;
	return ;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << this->_name << " is dead..." << std::endl;
	return ;
}

/*
** Constructor by copy
*/

ClapTrap::ClapTrap( ClapTrap const &src )
{
	*this = src;
	return ;
}

/*
** assignement overload
*/

ClapTrap	&ClapTrap::operator=( ClapTrap const &rhs )
{
	this->_energyPoints = rhs._energyPoints;
	this->_hitPoints = rhs._hitPoints;
	this->_attackDammage = rhs._attackDammage;
	this->_name = rhs._name;
	return (*this);
}

Clap1

/*
** 

iostream	&operator<<( iostream &os, ClapTrap const &rhs )
{
	os << "Name = " << rhs.name << std::endl;
	os << "Hitpoints = " << rhs._hitPoints << std::endl;
	os << "Energy Points = " << rhs._energyPoints << std::endl;
	os << "Attack Dammage = " << rhs._attackDammage << std::endl;
	return (os);
}