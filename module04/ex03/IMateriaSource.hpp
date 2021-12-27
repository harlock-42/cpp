#ifndef IMATERIASOURCE_H
# define IMATERIASOURCE_H

# include <iostream>
# include <string>

# include "AMateria.hpp"

class IMateriaSource
{
	protected:

	public:

		// Canonical Form

		IMateriaSource( void );
		IMateriaSource( IMateriaSource const &rhs );
		IMateriaSource &operator=( IMateriaSource const &rhs );
		virtual	~IMateriaSource( void );

		// Getter

		// Setter

		// Action Methods

		virtual	void	learnMateria( AMateria *materia ) = 0;

};

#endif