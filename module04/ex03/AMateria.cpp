#include "AMateria.hpp"

/*
** ----------------------
** --- CANONICAL FORM ---
** ----------------------
*/

/*
** Constructor by default
*/

AMateria::AMateria( void ) : _type("No type yet")
{
	std::cout << GREEN << "Constructor by default of AMateria called" << NC << std::endl;
	return ;
}

/*
** Constructor by copie
*/

AMateria::AMateria( AMateria const &src )
{
	std::cout << GREEN << "Constructor by copie of AMateria called" << NC << std::endl;
	*this = src;
	return ;
}

/*
** Assignement overload
*/

AMateria	&AMateria::operator=( AMateria const &rhs )
{
	std::cout << GREEN << "Assignement overload of AMateria called" << NC << std::endl;
	this->_type = rhs._type;
	return (*this);
}

/*
** Detructor
*/

AMateria::~AMateria( void )
{
	std::cout << RED << "Destructor of AMateria called" << NC << std::endl;
	return ;
}

/*
** ----------------------
*/
