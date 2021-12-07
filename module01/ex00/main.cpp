#include <iostream>
#include "zombie.hpp"

int		main()
{
	std::cout << "Call newZombie() function" << std::endl << std::endl;
	Zombie *Jule_Cesar = newZombie("Jule-Cesar");
	std::cout << "Call announce() function" << std::endl << std::endl;
	Jule_Cesar->announce();
	std::cout << std::endl << "Call randomChump() function" << std::endl << std::endl;
	randomChump("Jean-Jacques");
	std::cout << std::endl << "Time to stop Jule-Cesar" << std::endl;
	delete Jule_Cesar;	
	return (0);
}