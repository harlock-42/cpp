#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:

		FragTrap( std::string name );
		~FragTrap( void );

		FragTrap( FragTrap const &src );
		FragTrap	&operator=( FragTrap const &rhs );
		
		void	highFiveGuys( void ) const;
};

#endif