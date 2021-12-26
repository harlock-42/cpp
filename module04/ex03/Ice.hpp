#ifndef ICE_H
# define ICE_H

# include <iostream>
# include <string>

# include "AMateria.hpp"

class Ice : public AMateria
{
	protected:

	public:

		// Canonical Form

		Ice( void );
		Ice( Ice const &rhs );
		Ice &operator=( Ice const &rhs );
		virtual ~Ice( void );

		// Getter

		// Setter

		// Action Methods

		virtual	Ice	*clone() const;
};

#endif