#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"

class Dog : public Animal
{
	public:

		Dog( void );
		~Dog( void );
		Dog( Dog const &src );
		Dog	&operator=( Dog const &rhs );

		// actions methodes

		virtual void	makeSound( void ) const;
};

#endif