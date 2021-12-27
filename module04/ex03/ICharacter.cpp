#include "ICharacter.hpp"

/*
** ----------------------
** --- CANONICAL FORM ---
** ----------------------
*/

/*
** Constructor by default
*/

ICharacter::ICharacter( void ) : _name("None")
{
	// std::cout << "ICharacter: Constructor by default called" << std::endl;
	return ;
}

/*
** Constructor by name
*/

ICharacter::ICharacter( std::string name ) : _name(name)
{
	// std::cout << "ICharacter: Constructor by name called" << std::endl;
	return ;
}

/*
** Constructor by copie
*/

ICharacter::ICharacter( ICharacter const &rhs )
{
	// std::cout << "ICharacter: Constructor by copie called" << std::endl;
	*this = rhs;
	return ;
}

/*
** Assignment Overload
*/

ICharacter	&ICharacter::operator=( ICharacter const & rhs )
{

	// std::cout << "ICharacter: Assignment's overload called" << std::endl;
	this->_name = rhs._name;
	return ( *this );
}

/*
** Destructor
*/

ICharacter::~ICharacter( void )
{
	// std::cout << "ICharacter: Destructor called" << std::endl;
	return ;
}

/*
** ----------------------
*/

/*
** --------------
** --- GETTER ---
** --------------
*/

/*
** --------------
*/

/*
** --------------
** --- SETTER ---
** --------------
*/

/*
** --------------
*/

/*
** ----------------------
** --- ACTION METHODS ---
** ----------------------
*/

/*
** ----------------------
*/