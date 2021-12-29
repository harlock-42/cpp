#ifndef DOG_H
# define DOG_H

#include "AAnimal.hpp"
#include "Brain.hpp"
#include "color.hpp"

class Dog : public AAnimal
{
	private:

		Brain	*_brain;

	public:

		Dog( void );
		~Dog( void );
		Dog( Dog const &src );
		Dog	&operator=( Dog const &rhs );

		// getter

		std::string	getIdeas( void ) const;

		// setter

		void		setIdeas( std::string ideas );

		// actions methodes

		virtual void	makeSound( void ) const;
};

#endif