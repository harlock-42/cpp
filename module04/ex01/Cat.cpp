# include "Cat.hpp"

/*
** ----------------------
** --- CANONICAL FORM ---
** ----------------------
*/

/*
** Constructor
*/

Cat::Cat( void ) : Animal("Cat"), _brain(new Brain())
{
	std::cout << GREEN << "The mad scientist transplant a brain in a Cat" << NC << std::endl;
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
	delete this->_brain;
	std::cout << RED << "The Cat dies... with his fake brain !" << NC << std::endl;
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
