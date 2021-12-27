#include "Cure.hpp"

/*
** ----------------------
** --- CANONICAL FORM ---
** ----------------------
*/

/*
** Constructor by default
*/

Cure::Cure( void ) : AMateria("cure")
{
	//std::cout << Cure: Constructor by default called << std::endl;
	return ;
}

/*
** Constructor by copie
*/

Cure::Cure( Cure const &rhs ) : AMateria(rhs)
{
	//std::cout << Cure: Constructor by copie called << std::endl;
	*this = rhs;
	return ;
}

/*
** Assignment Overload
*/

Cure	&Cure::operator=( Cure const & rhs )
{

	//std::cout << Cure: Assignment's overload called << std::endl;
	(void)rhs;
	return ( *this );
}

/*
** Destructor
*/

Cure::~Cure( void )
{
	//std::cout << Cure: Destructor called << std::endl;
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

Cure	*Cure::clone( void ) const
{
	Cure *cure = new Cure();
	cure->setType(this->getType());
	return (cure);
}

void	Cure::use( ICharacter &target )
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}

/*
** ----------------------
*/