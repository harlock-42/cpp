#ifndef BRAIN_H
# define BRAIN_H

# include "color.hpp"
# include <string>
# include <iostream>

class Brain
{
	protected:

		std::string	ideas[100];

	public:

		//Canonical form

		Brain( void );
		~Brain( void );
};

#endif