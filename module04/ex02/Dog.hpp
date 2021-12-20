#ifndef DOG_H
# define DOG_H

# include <string>
# include <iostream>
# include "color.hpp"
# include "AAnimal.hpp"


class Dog
{
	private:

		std::string _type;

	public:

		// Canonical form

		Dog( void );
		~Dog( void );
		Dog( Dog const &src);
		Dog	&operator=(Dog const &rhs);

		// Getter

		std::string	getType( void ) const;

		// Action Methods

		virtual void	makeSound( void ) const;
};

#endif