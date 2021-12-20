#include "AAnimal.hpp"

/*
** ----------------------
** --- CANONICAL FORM ---
** ----------------------
*/

/*
** Constructor by default
*/

AAnimal::AAnimal( void ) : _type("")
{
	std::cout << GREEN << "An Animal appeared" << NC << std::endl;
	return ;
}

/*
** Constructor by copie
*/

AAnimal::AAnimal( AAnimal const &src )
{
	std::cout << GREEN << "The Animal has been cloned" << NC << std::endl;
	*this = src;
	return ;
}

/*
** Assignement overload
*/

AAnimal	&AAnimal::operator=( AAnimal const &rhs )
{
	this->_type = rhs._type;
	std::cout << GREEN << "The Animal has been assigned" << NC << std::endl;
	return (*this);
}

/*
** Destructor
*/

AAnimal::~AAnimal( void )
{
	std::cout << RED << "The Animal is gone !" << NC << std::endl;
	return ;
}

/*
** ----------------------
*/

/*
** ----------------------
** --- ACTION METHODS ---
** ----------------------
*/

void	AAnimal::makeSound( void ) const
{
	std::cout << YELLOW << "Hein ???" << NC << std::endl;
	return ;
}

/*
** ----------------------
*/