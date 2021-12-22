#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << GREEN << "A mad scientist create a Brain" << NC << std::endl;
	return ;
}

Brain::~Brain( void )
{
	std::cout << RED << "The mad scientist dropped his creation..." << NC << std::endl;
	return ;
}