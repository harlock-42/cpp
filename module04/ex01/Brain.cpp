#include "Brain.hpp"

/*
** ----------------------
** --- CANONICAL FORM ---
** ----------------------
*/

Brain::Brain( void )
{
	std::cout << GREEN << "A mad scientist initialized a Brain" << NC << std::endl;
	return ;
}

Brain::~Brain( void )
{
	std::cout << RED << "The mad scientist drop his creation" << NC << std::endl;
	return ;
}