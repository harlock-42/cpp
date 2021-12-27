#include "Ice.hpp"

/*
** ----------------------
** --- CANONICAL FORM ---
** ----------------------
*/

/*
** Constructor by default
*/

Ice::Ice( void ) : AMateria("ice")
{
	// std::cout << "Ice: constructor by default called" << std::endl;
	return ;
}

/*
** Constructor by copie
*/

Ice::Ice( Ice const &rhs ) : AMateria(rhs)
{
	// std::cout << "Ice: constructor by copie called" << std::endl;
	*this = rhs;
	return ;
}

/*
** Assignment Overload
*/

Ice	&Ice::operator=( Ice const & rhs )
{
	(void)rhs;
	return ( *this );
}

/*
** Destructor
*/

Ice::~Ice( void )
{
	// std::cout << "Ice: destructor called" << std::endl;
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

Ice	*Ice::clone( void ) const
{
	Ice *ice = new Ice();
	ice->setType(this->getType());
	return (ice);
}

void	Ice::use( ICharacter &target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() <<" *" << std::endl;
	return ;
}

/*
** ----------------------
*/