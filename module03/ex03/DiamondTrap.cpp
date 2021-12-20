#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	ClapTrap::setEnergyPoints(50);
	std::cout << this->_name << " is comming " << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "Monster is dead" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap( DiamondTrap const &src ) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	std::cout << "DiamondTrap constructor by copie called" << std::endl;
	*this = src;
}

DiamondTrap	&DiamondTrap::operator=( DiamondTrap const &rhs )
{
	this->_name = rhs._name;
	this->ClapTrap::setName(rhs.ClapTrap::getName());
	this->ClapTrap::setHitPoints(rhs.ClapTrap::getHitPoints());
	this->ClapTrap::setEnergyPoints(rhs.ClapTrap::getEnergyPoints());
	this->ClapTrap::setAttackDammage(rhs.ClapTrap::getAttackDammage());
	this->ScavTrap::setName(rhs.ScavTrap::getName());
	this->FragTrap::setName(rhs.FragTrap::getName());
	return (*this);
}

/*
** ----------------------
** --- ACTION METHODS ---
** ----------------------
*/

void	DiamondTrap::whoAmI( void ) const
{
	std::cout << "My ClapTrap name is " << this->ClapTrap::getName() << std::endl \
	<< "My DiamondName is " << this->_name << std::endl;
}

void	DiamondTrap::attack( std::string const &target )
{
	ScavTrap::attack(target);
	return ;
}

void	DiamondTrap::guardGate( void ) const
{
	ScavTrap::guardGate();
	return ;
}

void	DiamondTrap::highFiveGuys( void ) const
{
	FragTrap::highFiveGuys();
	return ;
}
