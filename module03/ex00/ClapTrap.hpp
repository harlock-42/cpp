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

		// getter

		std::string		getName( void ) const;
		unsigned	int	getHitPoints( void ) const;
		unsigned	int	getEnergyPoints( void ) const;
		unsigned	int	getAttackDammage( void ) const;

		// actions method

		void			attack(std::string const &target);
		void			takeDammage( unsigned int amount );
		void			beRepaired( unsigned int amount );

	private:

		std::string	_name;
		unsigned	int		_hitPoints;
		unsigned	int		_energyPoints;
		unsigned	int		_attackDammage;
};

std::ostream	&operator<<( std::ostream &os, ClapTrap const &rhs );

#endif