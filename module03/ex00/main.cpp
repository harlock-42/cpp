#include "ClapTrap.hpp"

int		main()
{
	ClapTrap	michel = ClapTrap("Michel");
	ClapTrap	Jesus = ClapTrap("Michel");

	michel.attack("Jesus");
	std::cout << std::endl;
	michel.takeDammage(michel.getAttackDammage());
	Jesus.beRepaired(1000);
	return (0);
}