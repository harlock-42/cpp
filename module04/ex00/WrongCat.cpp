#include "WrongCat.hpp"

/*
** ----------------------
** --- CANONICAL FORM ---
** ----------------------
*/

/*
** Constructor
*/

WrongCat::WrongCat( void ) : WrongAnimal("Cat")
{
	std::cout << "It's a Wrongcat !" << std::endl;
	return ;
}

/*
** Constructor by copie
*/

WrongCat::WrongCat( WrongCat const &rhs ) : WrongAnimal(rhs)
{
	*this = rhs;
	return ;
}

/*
** Destructor
*/

WrongCat::~WrongCat( void )
{
	std::cout << "It was a Wrongcat..." << std::endl;
	return ;
}

/*
** assignement overload
*/

WrongCat	&WrongCat::operator=( WrongCat const &rhs )
{
	this->WrongAnimal::setType(rhs.WrongAnimal::getType());
	return (*this);
}

/*
** ----------------------
*/

/*
** -----------------------
** --- ACTIONS METHODS ---
** -----------------------
*/

void	WrongCat::makeSound( void ) const
{
	std::cout << "miaou" << std::endl;
	return ;
}
