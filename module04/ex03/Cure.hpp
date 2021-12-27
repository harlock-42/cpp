#ifndef CURE_H
# define CURE_H

# include <iostream>
# include <string>

# include "AMateria.hpp"

class Cure : public AMateria
{
	protected:

	public:

		// Canonical Form

		Cure( void );
		Cure( Cure const &rhs );
		Cure &operator=( Cure const &rhs );
		~Cure( void );

		// Getter

		// Setter

		// Action Methods

		virtual	Cure	*clone() const;
		virtual	void	use( ICharacter &target );


};

#endif