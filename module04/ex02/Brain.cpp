#include "Brain.hpp"

/*
** ----------------------
** --- CANONICAL FORM ---
** ----------------------
*/

/*
** Constructor by default
*/

Brain::Brain( void )
{
	for (int i = 0; i < 100; ++i)
		this->_ideas[i] = '\0';
	std::cout << GREEN << "A mad scientist initialized a Brain" << NC << std::endl;
	return ;
}

/*
** Constructor by copie
*/

Brain::Brain( Brain const &rhs )
{
	*(this->_ideas) = *(rhs._ideas);
}

/*
** Destructor
*/

Brain::~Brain( void )
{
	std::cout << RED << "The mad scientist drop his creation" << NC << std::endl;
	return ;
}


/*
** --------------
** --- SETTER ---
** --------------
*/

void	Brain::setIdeas( std::string ideas )
{
	if (ideas.length() > 100)
		return ;
	*(this->_ideas) = ideas;
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

std::string	Brain::getIdeas( void ) const
{
	return (*(this->_ideas));
}

/*
** --------------
*/