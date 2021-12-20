#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"
#include "color.hpp"

class Cat : public Animal
{
	private:
	
		Brain	*_brain;

	public:

		Cat( void );
		~Cat( void );
		Cat( Cat const &src );
		Cat	&operator=( Cat const &rhs );

		// action methods

		virtual void	makeSound( void ) const;
};

#endif