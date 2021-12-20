#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name + "_clap_name"), _name(name)
{
	this->ClapTrap::setHitPoints(100);
	this->ClapTrap::setEnergyPoints(50);
	this->ClapTrap::setAttackDammage(20);
	std::cout << "ScavTrap constructor called" << std::endl;
	return ;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap destructor called" << std::endl;
	return ;
}

/*
** Constructor by copie
*/

ScavTrap::ScavTrap ( ScavTrap const &src ) : ClapTrap( src )
{
	std::cout << "ScavTrap constructor by copie called" << std::endl;
	*this = src;
	return ;
}

/*
** assignement overload
*/

ScavTrap	&ScavTrap::operator=( ScavTrap const &rhs )
{
	std::cout << rhs.getName() << " transmit his power by overload" << std::endl;
	this->ClapTrap::setName(rhs.ClapTrap::getName());
	this->ClapTrap::setHitPoints(rhs.ClapTrap::getHitPoints());
	this->ClapTrap::setEnergyPoints(rhs.ClapTrap::getEnergyPoints());
	this->ClapTrap::setAttackDammage(rhs.ClapTrap::getAttackDammage());
	return (*this);
}

/*
** getter
*/


std::string	ScavTrap::getName( void ) const
{
	return (this->_name);
}

/*
** setter
*/

void	ScavTrap::setName( std::string name )
{
	this->_name = name;
	return ;
}

/*
** -----------------------
** --- ACTIONS METHODS ---
** -----------------------
*/

void	ScavTrap::guardGate( void ) const
{
	std::cout << this->_name << " is now keeping the gate" << std::endl;
	return ;
}

void	ScavTrap::attack( std::string const &target )
{
	std::cout << "ScavTrap " << this->_name << " attack " << target << ", causing " \
	<< this->getAttackDammage() << " points of damage !" << std::endl;
}