#ifndef AANIMAL_H
# define AANIMAL_H

# include "color.hpp"
# include <iostream>
# include <string>

class AAnimal
{
	protected:

		std::string	_type;

	public:

		// Canonical form

		AAnimal( void );
		AAnimal( AAnimal const &src);
		AAnimal	&operator=( AAnimal const &rhs);
		virtual ~AAnimal( void );

		// Acion Methods

		virtual void	makeSound( void ) const = 0;
};

#endif