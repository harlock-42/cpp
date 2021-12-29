#include "AAnimal.hpp"

/*
** ----------------------
** --- CANONICAL FORM ---
** ----------------------
*/

/*
** Default constructor
*/

AAnimal::AAnimal( void ) : _type("")
{
	return ;
}

/*
** Constructor
*/

AAnimal::AAnimal( std::string type ) : _type(type)
{
	std::cout << "An Animal is born !" << std::endl;
	return ;
}

/*
** Constructor by copie
*/

AAnimal::AAnimal( AAnimal const &src )
{
	std::cout << "An Animal has been cloned !!" << std::endl;
	*this = src;
}

/*
** Destructor
*/

AAnimal::~AAnimal( void )
{
	std::cout << "An Animal has been eaten..." << std::endl;
	return ;
}

/*
** Assignement overload
*/

AAnimal	&AAnimal::operator=( AAnimal const &rhs )
{
	this->_type = rhs._type;
	return (*this);
}

/*
** Left redirection overload
*/

std::ostream	&operator<<( std::ostream &os, AAnimal const &rhs )
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

std::string		AAnimal::getType( void ) const
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

void	AAnimal::setType( std::string type )
{
	this->_type = type;
	return ;
}

/*
** --------------
*/