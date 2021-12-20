#include "Dog.hpp"

/*
** ----------------------
** --- CANONICAL FORM ---
** ----------------------
*/

/*
** Constructor by default
*/

Dog::Dog( void ) : _type("Dog")
{
	std::cout << GREEN << "Dog constructor called" << NC << std::endl;
	return ;
}

/*
** Constructor by copie
*/

Dog::Dog( Dog const &src )
{
	std::cout << GREEN << "Dog copie constructor called" << NC << std::endl;
	*this = src;
	return ;
}

/*
** Assignement Overload
*/

Dog	&Dog::operator=( Dog const &rhs)
{
	std::cout << "Assignement overload called" << std::endl;
	this->_type = rhs.getType();
	return (*this);
}

/*
** Destructor
*/

Dog::~Dog( void )
{
	std::cout << RED << "Dog destructor called" << NC << std::endl;
	return ;
}

/*
** ----------------------
*/

/*
** --------------
** --- Getter ---
** --------------
*/

std::string	Dog::getType( void ) const
{
	return (this->_type);
}

/*
** --------------
*/

/*
** ----------------------
** --- ACTION METHODS ---
** ----------------------
*/

void	Dog::makeSound( void ) const
{
	std::cout << PURPLE << "miaouuu" << NC << std::endl;
	return ;
}

/*
** ----------------------
*/