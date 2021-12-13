#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	private:

		std::string	_name;

	public:

		FragTrap( std::string name );
		~FragTrap( void );

		FragTrap( FragTrap const &src );
		FragTrap	&operator=( FragTrap const &rhs );
		
		void	highFiveGuys( void ) const;
};

#endif