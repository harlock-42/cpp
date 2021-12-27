#include "Character.hpp"

/*
** ----------------------
** --- CANONICAL FORM ---
** ----------------------
*/

/*
** Constructor by default
*/

Character::Character( void ) : ICharacter("character")
{
	for (int i = 0; i < 4; ++i)
		this->_inv[i] = NULL;
	// std::cout << "Character: Constructor by default called" << std::endl;
	return ;
}

/*
** Constructor by name
*/

Character::Character( std::string name) : ICharacter(name)
{
	for (int i = 0; i < 4; ++i)
		this->_inv[i] = NULL;
	// std::cout << "Character: Constructor by name called" << std::endl;
	return ;
}

/*
** Constructor by copie
*/

Character::Character( Character const &rhs )
{
	// std::cout << "Character: Constructor by copie called" << std::endl;
	*this = rhs;
	return ;
}

/*
** Assignment Overload
*/

Character	&Character::operator=( Character const & rhs )
{

	// std::cout << "Character: Assignment's overload called" << std::endl;
	(void)rhs;
	return ( *this );
}

/*
** Destructor
*/

Character::~Character( void )
{
	// std::cout << "Character: Destructor called" << std::endl;
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

std::string	const	&Character::getName( void ) const
{
	return (this->_name);
}

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

/*
** Add a materia to the inventory
*/

void	Character::equip( AMateria *m )
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_inv[i] == NULL)
		{
			this->_inv[i] = m;
			break ;
		}
	}
	return ;
}

/*
** remove a materia from the inventory
*/

void	Character::unequip( int idx )
{
	if ( idx < 0 || idx > 4)
		return ;
	this->_inv[idx] = NULL;
	return ;
}

/*
** Display an action from a materia to a character
*/

void	Character::use( int idx, ICharacter &target )
{
	if (idx < 0 || idx > 4)
		return ;
	if (this->_inv[idx] != NULL)
		this->_inv[idx]->use(target);
	(void)target;
	return ;
}


/*
** ----------------------
*/