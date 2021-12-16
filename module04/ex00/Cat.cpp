# include "Cat.hpp"

/*
** ----------------------
** --- CANONICAL FORM ---
** ----------------------
*/

/*
** Constructor
*/

Cat::Cat( void ) : Animal("Cat")
{
	std::cout << "It's a cat !" << std::endl;
	return ;
}

/*
** Constructor by copie
*/

Cat::Cat( Cat const &rhs ) : Animal(rhs)
{
	*this = rhs;
	return ;
}

/*
** Destructor
*/

Cat::~Cat( void )
{
	std::cout << "It was a cat..." << std::endl;
	return ;
}

/*
** assignement overload
*/

Cat	&Cat::operator=( Cat const &rhs )
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

void	Cat::makeSound( void ) const
{
	std::cout << "miaou" << std::endl;
	return ;
}
