#include "WrongAnimal.hpp"

/*
** ----------------------
** --- CANONICAL FORM ---
** ----------------------
*/

/*
** Default constructor
*/

WrongAnimal::WrongAnimal( void ) : _type("")
{
	return ;
}

/*
** Constructor
*/

WrongAnimal::WrongAnimal( std::string type ) : _type(type)
{
	std::cout << "An WrongAnimal is born !" << std::endl;
	return ;
}

/*
** Constructor by copie
*/

WrongAnimal::WrongAnimal( WrongAnimal const &src )
{
	std::cout << "An WrongAnimal has been cloned !!" << std::endl;
	*this = src;
}

/*
** Destructor
*/

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "An WrongAnimal has been eaten..." << std::endl;
	return ;
}

/*
** Assignement overload
*/

WrongAnimal	&WrongAnimal::operator=( WrongAnimal const &rhs )
{
	this->_type = rhs._type;
	return (*this);
}

/*
** Left redirection overload
*/

std::ostream	&operator<<( std::ostream &os, WrongAnimal const &rhs )
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

std::string		WrongAnimal::getType( void ) const
{
	return (this->_type);
}

/*
** --------------
*/

/*
** --------------
** --- setter ---
** --------------
*/

void	WrongAnimal::setType( std::string type )
{
	this->_type = type;
	return ;
}

/*
** --------------
*/

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "Hein !?" << std::endl;
	return ;
}