#ifndef AMATERIA_H
# define AMATERIA_H

# include <string>
# include <iostream>

# include "ICharacter.hpp"
# include "color.hpp"

class ICharacter;

class AMateria
{
	protected:

		std::string _type;
	
	public:

		// Canonical form
		AMateria( void );
		AMateria( AMateria const &src );
		AMateria	&operator=( AMateria const &rhs );
		virtual		~AMateria( void );

		// Constructor

		AMateria( std::string type );

		// Getter

		std::string	const	&getType( void ) const;

		// setter

		void	setType( std::string type);

		// Action Methods

		virtual	AMateria	*clone( void ) const = 0;
		virtual	void		use( ICharacter &target );

};

#endif