#ifndef WRONG_ANIMAL_H
# define WRONG_ANIMAL_H

# include <iostream>
# include <string>

class WrongAnimal
{
	protected:

		std::string	_type;

	public:

		WrongAnimal( void );
		WrongAnimal( std::string type );
		WrongAnimal( WrongAnimal const &src );
		virtual ~WrongAnimal( void );
		WrongAnimal	&operator=( WrongAnimal const &rhs );

		// getter

		std::string	getType( void ) const;

		// setter

		void	setType( std::string type );
		
		// action methods

		void	makeSound( void ) const;
};

std::ostream	&operator<<( std::ostream &os, WrongAnimal const &rhs );

# endif