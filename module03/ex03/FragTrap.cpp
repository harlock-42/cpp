#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap(name + "_clap_name"), _name(name)
{
	this->ClapTrap::setHitPoints(100);
	this->ClapTrap::setEnergyPoints(100);
	this->ClapTrap::setAttackDammage(30);
	std::cout << "FragTrap constructor called" << std::endl;
	return ;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap destructor called" << std::endl;
	return ;
}

/*
** Constructor by copie
*/

FragTrap::FragTrap ( FragTrap const &src ) : ClapTrap( src )
{
	std::cout << "FragTrap constructor by copie called" << std::endl;
	*this = src;
	return ;
}

/*
** assignement overload
*/

FragTrap	&FragTrap::operator=( FragTrap const &rhs )
{
	std::cout << rhs.getName() << " transmit his power by overload" << std::endl;
	this->ClapTrap::setName(rhs.ClapTrap::getName());
	this->ClapTrap::setHitPoints(rhs.ClapTrap::getHitPoints());
	this->ClapTrap::setEnergyPoints(rhs.ClapTrap::getEnergyPoints());
	this->ClapTrap::setAttackDammage(rhs.ClapTrap::getAttackDammage());
	return (*this);
}

/*
** -----------------------
** --- ACTIONS METHODS ---
** -----------------------
*/

void	FragTrap::highFiveGuys( void ) const
{
	std::cout << this->_name << " gives five to his new friend !" << std::endl;
	return ;
}
