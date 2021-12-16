#ifndef WRONG_CAT_H
# define WRONG_CAT_H

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:

		WrongCat( void );
		~WrongCat( void );
		WrongCat( WrongCat const &src );
		WrongCat	&operator=( WrongCat const &rhs );

		// action methods

		void	makeSound( void ) const;
};

#endif