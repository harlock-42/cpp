#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>
# include <string>

class Animal
{
	protected:

		std::string	_type;

	public:

		Animal( void );
		Animal( std::string type );
		Animal( Animal const &src );
		virtual ~Animal( void );
		Animal	&operator=( Animal const &rhs );

		// getter

		std::string	getType( void ) const;

		//setter

		void	setType( std::string type );
		
		// action methods

		virtual void	makeSound( void ) const;
};

std::ostream	&operator<<( std::ostream &os, Animal const &rhs );

# endif