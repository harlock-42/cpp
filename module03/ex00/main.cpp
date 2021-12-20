#include "ClapTrap.hpp"

int		main()
{
	ClapTrap	michel = ClapTrap("Michel");
	ClapTrap	Jesus = ClapTrap("Jesus");

	std::cout << std::endl;
	std::cout << Jesus;
	std::cout << std::endl;
	std::cout << michel;
	std::cout << std::endl;
	michel.attack("Jesus");
	std::cout << std::endl;
	michel.takeDammage(michel.getAttackDammage());
	std::cout << std::endl;
	Jesus.beRepaired(1000);
	std::cout << std::endl;
	return (0);
}