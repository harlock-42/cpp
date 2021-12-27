#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include <iostream>
# include <string>

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	protected:

		AMateria	*_materiaLearned;

	public:

		// Canonical Form

		MateriaSource( void );
		MateriaSource( MateriaSource const &rhs );
		MateriaSource &operator=( MateriaSource const &rhs );
		~MateriaSource( void );

		// Getter

		// Setter

		// Action Methods

		virtual	void	learnMateria( AMateria *materia );
};

#endif