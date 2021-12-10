#ifndef CLAPETRAP_H
#define CLAPETRAP_H

#include <iostream>
#include <string>

class ClapTrap
{
	public:

		ClapTrap( std::string name );
		~ClapTrap( void );
		ClapTrap( ClapTrap const &src );
		ClapTrap	&operator=( ClapTrap const &rhs );
		std::string	getName( void );



	private:

		std::string	_name;
		unsigned	int		_hitPoints;
		unsigned	int		_energyPoints;
		unsigned	int		_attackDammage;

};

iostream	&operator<<( iostream &os, ClapTrap const &rhs );

#endif