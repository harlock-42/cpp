#include "Cat.hpp"

/*
** ----------------------
** --- CANONICAL FORM ---
** ----------------------
*/

/*
** Constructor by default
*/

Cat::Cat( void ) : _type("Cat"), _brain(new Brain())
{
	std::cout << GREEN << "Cat constructor called" << NC << std::endl;
	return ;
}

/*
** Constructor by copie
*/

Cat::Cat( Cat const &src ) : AAnimal()
{
	std::cout << GREEN << "Cat copie constructor called" << NC << std::endl;
	*this = src;
	return ;
}

/*
** Assignement Overload
*/

Cat	&Cat::operator=( Cat const &rhs)
{
	std::cout << "Assignement overload called" << std::endl;
	this->_type = rhs.getType();
	return (*this);
}

/*
** Destructor
*/

Cat::~Cat( void )
{
	delete	_brain;
	std::cout << RED << "Cat destructor called" << NC << std::endl;
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

std::string	Cat::getType( void ) const
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

void	Cat::makeSound( void ) const
{
	std::cout << PURPLE << "miaouuu" << NC << std::endl;
	return ;
}

/*
** ----------------------
*/
