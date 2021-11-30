#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>

class Weapon
{
	std::string	type;
	
	public:

		Weapon( std::string type );
		~Weapon( void );
		std::string const	&getType( void ) const;
};

#endif