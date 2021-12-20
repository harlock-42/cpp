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

		std::string	getName( void ) const;
		void		setName( std::string name );

		// action methods
		void	attack( std::string const &target );
		void	guardGate( void ) const;

};

#endif