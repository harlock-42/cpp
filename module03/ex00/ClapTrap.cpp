#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDammage(0)
{
	std::cout << name << " is ready to fight" << std::endl;
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
** ----------------------
** ------ GETER ---------
** ----------------------
*/

std::string	ClapTrap::getName( void ) const
{
	return (this->_name);
}

unsigned	int	ClapTrap::getAttackDammage( void ) const
{
	return (this->_attackDammage);
}

unsigned	int	ClapTrap::getHitPoints( void ) const
{
	return (this->_hitPoints);
}

unsigned	int	ClapTrap::getEnergyPoints( void ) const
{
	return (this->_energyPoints);
}

/*
** -------------------------------
** ------ ACTION METHODS ---------
** -------------------------------
*/

void		ClapTrap::attack( std::string const &target )
{
	std::cout << "ClapTrap " << this->getName() << " attack " << target << ", causing "\
	<< this->_attackDammage << " points of damage !" << std::endl;
}

void		ClapTrap::takeDammage( unsigned int amount )
{
	std::cout << "ClapTrap " << this->getName() << " takes " << amount << " damages !" << std::endl;
	if (amount > this->_hitPoints)
		this->_energyPoints = 0;
	else
		this->_energyPoints -= amount;
	std::cout << this->getName() << " has " << this->getEnergyPoints() << " energy points left" << std::endl;
}

void		ClapTrap::beRepaired( unsigned int amount )
{
	std::cout << this->getName() << " regenerate " << amount << " energy points" << std::endl;
	this->_energyPoints += amount;
	std::cout << this->getName() << " has " << this->getEnergyPoints() << " energy points left" << std::endl;
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

/*
** overload <<
*/

std::ostream	&operator<<( std::ostream &os, ClapTrap const &rhs )
{
	os << "Name = " << rhs.getName() << std::endl;
	os << "Hitpoints = " << rhs.getHitPoints() << std::endl;
	os << "Energy Points = " << rhs.getEnergyPoints() << std::endl;
	os << "Attack Dammage = " << rhs.getAttackDammage() << std::endl;
	return (os);
}
