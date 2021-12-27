#ifndef CHARACTER_H
# define CHARACTER_H

# include <iostream>
# include <string>

# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:

		AMateria	*_inv[4];

	public:

		// Canonical Form

		Character( void );
		Character( std::string name );
		Character( Character const &rhs );
		Character &operator=( Character const &rhs );
		~Character( void );

		// Getter

		virtual	std::string	const	&getName() const;

		// Setter

		// Action Methods

		virtual	void	equip( AMateria *m );
		virtual	void	unequip( int idx );
		virtual	void	use( int idx, ICharacter &target );

};

#endif