#include "IMateriaSource.hpp"

/*
** ----------------------
** --- CANONICAL FORM ---
** ----------------------
*/

/*
** Constructor by default
*/

IMateriaSource::IMateriaSource( void )
{
	std::cout << "IMateriaSource: Constructor by default called" << std::endl;
	return ;
}

/*
** Constructor by copie
*/

IMateriaSource::IMateriaSource( IMateriaSource const &rhs )
{
	std::cout << "IMateriaSource: Constructor by copie called" << std::endl;
	*this = rhs;
	return ;
}

/*
** Assignment Overload
*/

IMateriaSource	&IMateriaSource::operator=( IMateriaSource const & rhs )
{
	
	std::cout << "IMateriaSource: Assignment's overload called" << std::endl;
	(void)rhs;
	return ( *this );
}

/*
** Destructor
*/

IMateriaSource::~IMateriaSource( void )
{
	std::cout << "IMateriaSource: Destructor called" << std::endl;
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