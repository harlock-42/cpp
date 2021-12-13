#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int		main()
{
	FragTrap	pika = FragTrap("pikachu");
	std::cout << std::endl;
	std::cout << pika;
	std::cout << std::endl;

	ScavTrap	jesus = ScavTrap("Jesus");
	std::cout << std::endl;
	ScavTrap	judas = ScavTrap("Judas");
	std::cout << std::endl;

	std::cout << jesus;
	std::cout << std::endl;
	std::cout << judas;
	std::cout << std::endl;
	judas.guardGate();
	std::cout << std::endl;
	jesus.ClapTrap::attack("Judas");
	std::cout << std::endl;
	judas.ClapTrap::takeDammage(jesus.ClapTrap::getAttackDammage());
	std::cout << std::endl;
	std::cout << judas.getName() << " used copie attack.." << std::endl \
	<< judas.getName() << " copie resurection attack from " << jesus.getName() << " and use it !" << std::endl;
	std::cout << std::endl;
	judas.ClapTrap::beRepaired(1000);
	std::cout << std::endl;
	std::cout << "A Wild " << pika.ClapTrap::getName() << " Appeared" << std::endl;
	std::cout << std::endl;
	pika.ClapTrap::attack("Jesus");
	std::cout << std::endl;
	jesus.ClapTrap::takeDammage(pika.ClapTrap::getAttackDammage());
	std::cout << std::endl;
	pika.highFiveGuys();
	std::cout << std::endl;
	return (0);
}