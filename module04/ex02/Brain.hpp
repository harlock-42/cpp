#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>
#include <string.h>
#include "color.hpp"

class Brain
{
	private:

		std::string	_ideas[100];

	public:

		// Canonical form

		Brain( void );
		Brain( Brain const &rhs );
		~Brain( void );

		// Setter

		void	setIdeas( std::string ideas );
		
		// Getter

		std::string	getIdeas( void ) const;
};

#endif