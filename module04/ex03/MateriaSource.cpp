#include "MateriaSource.hpp"

/*
** ----------------------
** --- CANONICAL FORM ---
** ----------------------
*/

/*
** Constructor by default
*/

MateriaSource::MateriaSource( void )
{
	std::cout << "MateriaSource: Constructor by default called" << std::endl;
	return ;
}

/*
** Constructor by copie
*/

MateriaSource::MateriaSource( MateriaSource const &rhs )
{
	std::cout << "MateriaSource: Constructor by copie called" << std::endl;
	*this = rhs;
	return ;
}

/*
** Assignment Overload
*/

MateriaSource	&MateriaSource::operator=( MateriaSource const & rhs )
{

	std::cout << "MateriaSource: Assignment's overload called" << std::endl;
	(void)rhs;
	return ( *this );
}

/*
** Destructor
*/

MateriaSource::~MateriaSource( void )
{
	std::cout << "MateriaSource: Destructor called" << std::endl;
	return ;
}

/*
** ----------------------
*/

/*
** --------------
** --- GETTER ---
** --------------
*/

/*
** --------------
*/

/*
** --------------
** --- SETTER ---
** --------------
*/

/*
** --------------
*/

/*
** ----------------------
** --- ACTION METHODS ---
** ----------------------
*/

void	MateriaSource::learnMateria( AMateria *materia )
{
	this->_materiaLearned = materia->clone();
	return ;
}


/*
** ----------------------
*/