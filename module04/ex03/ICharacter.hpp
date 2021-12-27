#ifndef ICHARACTER_H
# define ICHARACTER_H

# include <iostream>
# include <string>

# include "AMateria.hpp"

class AMateria;

class ICharacter
{
	protected:

		std::string	_name;

	public:

		// Canonical Form

		ICharacter( void );
		ICharacter( std::string name );
		ICharacter( ICharacter const &rhs );
		ICharacter &operator=( ICharacter const &rhs );
		virtual	~ICharacter( void );

		// Getter

		virtual	std::string	const	&getName() const = 0;

		// Setter

		// Action Methods

		virtual	void	equip( AMateria *m ) = 0;
		virtual	void	unequip( int idx ) = 0;
		virtual	void	use( int idx, ICharacter &target ) = 0;

};

#endif