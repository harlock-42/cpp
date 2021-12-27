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
	for (int i = 0; i < 4; ++i)
		this->_source[i] = NULL;
	// std::cout << "MateriaSource: Constructor by default called" << std::endl;
	return ;
}

/*
** Constructor by copie
*/

MateriaSource::MateriaSource( MateriaSource const &rhs ) : IMateriaSource(rhs)
{
	// std::cout << "MateriaSource: Constructor by copie called" << std::endl;
	*this = rhs;
	return ;
}

/*
** Assignment Overload
*/

MateriaSource	&MateriaSource::operator=( MateriaSource const & rhs )
{

	// std::cout << "MateriaSource: Assignment's overload called" << std::endl;
	for (int i = 0; i < 4; ++i)
		this->_source[i] = rhs._source[i];
	return ( *this );
}

/*
** Destructor
*/

MateriaSource::~MateriaSource( void )
{
	// std::cout << "MateriaSource: Destructor called" << std::endl;
	for (int i = 0; i < 4; ++i)
	{
		if (this->_source[i] != NULL)
			delete this->_source[i];
	}
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
	if (materia == NULL)
		return ;
	for (int i = 0; i < 4; ++i)
	{
		if (this->_source[i] == NULL)
		{
			this->_source[i] = materia;
			break ;
		}
	}
	return ;
}

AMateria	*MateriaSource::createMateria( std::string const &type )
{
	for (int i = 0; i < 4; ++i)
	{
		if (type.compare(this->_source[i]->getType()) == 0)
			return (this->_source[i]->clone());
	}
	return (NULL);
}


/*
** ----------------------
*/