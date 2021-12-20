#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>
#include <string.h>
#include "color.hpp"

class Brain
{
	private:

		std::string	ideas[100];

	public:

		// Canonical form

		Brain( void );
		~Brain( void );
};

#endif