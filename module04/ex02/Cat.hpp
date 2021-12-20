#ifndef CAT_H
# define CAT_H

# include <string>
# include <iostream>
# include "color.hpp"
# include "AAnimal.hpp"

class Cat : public AAnimal
{
	private:

		std::string _type;

	public:

		// Canonical form

		Cat( void );
		~Cat( void );
		Cat( Cat const &src);
		Cat	&operator=(Cat const &rhs);

		// Getter

		std::string	getType( void ) const;

		// Action Methods

		virtual void	makeSound( void ) const;

};

#endif