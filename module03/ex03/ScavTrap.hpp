#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:

		ScavTrap( std::string name );
		~ScavTrap( void );

		ScavTrap( ScavTrap const &src );
		ScavTrap	&operator=( ScavTrap const &rhs );

		void	guardGate( void ) const;

};

#endif