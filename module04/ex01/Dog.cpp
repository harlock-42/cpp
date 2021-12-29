# include "Dog.hpp"

/*
** ----------------------
** --- CANONICAL FORM ---
** ----------------------
*/

/*
** Constructor
*/

Dog::Dog( void ) : Animal("Dog"), _brain( new Brain())
{
	std::cout << GREEN << "The mad scientist transplant a brain in a Dog" << NC << std::endl;
	return ;
}

/*
** Constructor by copie
*/

Dog::Dog( Dog const &rhs ) : Animal(rhs)
{
	this->_brain = new Brain();
	*(this->_brain) = *(rhs._brain);
	return ;
}

/*
** Destructor
*/

Dog::~Dog( void )
{
	delete this->_brain;
	std::cout << RED << "The Dog dies... with his fake brain !" << NC << std::endl;
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
** --------------
** --- SETTER ---
** --------------
*/

void	Dog::setIdeas( std::string ideas )
{
	this->_brain->setIdeas(ideas);
	return ;
}

/*
** --------------
*/

/*
** --------------
** --- GETTER ---
** --------------
*/

std::string	Dog::getIdeas( void ) const
{
	return (this->_brain->getIdeas());
}

/*
** --------------
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
