#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"


int		main()
{
	DiamondTrap michel = DiamondTrap("Michel");
	std::cout << std::endl;
	std::cout << michel;
	std::cout << std::endl;
	michel.attack("Santa");
	std::cout << std::endl;
	michel.highFiveGuys();
	std::cout << std::endl;
	michel.guardGate();
	std::cout << std::endl;
	michel.whoAmI();
	std::cout << std::endl;

	return (0);
}