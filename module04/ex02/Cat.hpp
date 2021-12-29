#ifndef CAT_H
# define CAT_H

#include "AAnimal.hpp"
#include "Brain.hpp"
#include "color.hpp"

class Cat : public AAnimal
{
	private:
	
		Brain	*_brain;

	public:

		Cat( void );
		~Cat( void );
		Cat( Cat const &src );
		Cat	&operator=( Cat const &rhs );

		// getter

		std::string	getIdeas( void ) const;

		// setter

		void		setIdeas( std::string ideas );
		
		// action methods

		virtual void	makeSound( void ) const;
};

#endif