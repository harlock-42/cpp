#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, FragTrap
{
	private:

		std::string _name;

	public:

		DiamondTrap( std::string name );
		~DiamondTrap( void );

		DiamondTrap( DiamondTrap const &src );
		DiamondTrap &operator=( DiamondTrap const &rhs );

		void	whoAmI( void ) const;
		void	attack( std::string const &target );
		void	guardGate( void ) const;
		void	highFiveGuys( void ) const;

};

#endif