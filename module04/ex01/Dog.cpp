# include "Dog.hpp"

/*
** ----------------------
** --- CANONICAL FORM ---
** ----------------------
*/

/*
** Constructor
*/

Dog::Dog( void ) : Animal("Dog")
{
	std::cout << "It's a Dog !" << std::endl;
	return ;
}

/*
** Constructor by copie
*/

Dog::Dog( Dog const &rhs ) : Animal(rhs)
{
	*this = rhs;
	return ;
}

/*
** Destructor
*/

Dog::~Dog( void )
{
	std::cout << "It was a Dog..." << std::endl;
	return ;
}

/*
** assignement overload
*/

Dog	&Dog::operator=( Dog const &rhs )
{
	this->Animal::setType(rhs.Animal::getType());
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

void	Dog::makeSound( void ) const
{
	std::cout << "waf" << std::endl;
	return ;
}
