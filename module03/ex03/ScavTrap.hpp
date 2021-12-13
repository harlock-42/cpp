#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	private:

		std::string	_name;

	public:

		ScavTrap( std::string name );
		~ScavTrap( void );

		ScavTrap( ScavTrap const &src );
		ScavTrap	&operator=( ScavTrap const &rhs );

		// action methods
		void	attack( std::string const &target );
		void	guardGate( void ) const;

};

#endif