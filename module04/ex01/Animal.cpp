#include "Animal.hpp"

/*
** ----------------------
** --- CANONICAL FORM ---
** ----------------------
*/

/*
** Default constructor
*/

Animal::Animal( void ) : _type("")
{
	return ;
}

/*
** Constructor
*/

Animal::Animal( std::string type ) : _type(type)
{
	std::cout << "An Animal is born !" << std::endl;
	return ;
}

/*
** Constructor by copie
*/

Animal::Animal( Animal const &src )
{
	std::cout << "An Animal has been cloned !!" << std::endl;
	*this = src;
}

/*
** Destructor
*/

Animal::~Animal( void )
{
	std::cout << "An Animal has been eaten..." << std::endl;
	return ;
}

/*
** Assignement overload
*/

Animal	&Animal::operator=( Animal const &rhs )
{
	this->_type = rhs._type;
	return (*this);
}

/*
** Left redirection overload
*/

std::ostream	&operator<<( std::ostream &os, Animal const &rhs )
{
	os << rhs.getType() << std::endl;
	return (os);
}

/*
** ----------------------
*/

/*
** --------------
** --- getter ---
** --------------
*/

std::string		Animal::getType( void ) const
{
	return (this->_type);
}

std::string		Animal::getIdeas( void ) const
{
	return (NULL);
}

/*
** --------------
*/

/*
** --------------
** --- setter ---
** --------------
*/

void	Animal::setType( std::string type )
{
	this->_type = type;
	return ;
}

void	Animal::setIdeas( std::string ideas )
{
	(void)ideas;
	return ;
}

/*
** --------------
*/

void	Animal::makeSound( void ) const
{
	std::cout << "Hein !?" << std::endl;
	return ;
}