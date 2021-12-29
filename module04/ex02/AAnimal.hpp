#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>
# include <string>
# include "color.hpp"

class AAnimal
{
	protected:

		std::string	_type;

	public:

		AAnimal( void );
		AAnimal( std::string type );
		AAnimal( AAnimal const &src );
		virtual ~AAnimal( void );
		AAnimal	&operator=( AAnimal const &rhs );

		// getter

		std::string	getType( void ) const;
		virtual	std::string	getIdeas( void ) const = 0;

		//setter

		void	setType( std::string type );
		virtual	void	setIdeas( std::string ideas ) = 0;
		
		// action methods

		virtual void	makeSound( void ) const = 0;
};

std::ostream	&operator<<( std::ostream &os, AAnimal const &rhs );

# endif