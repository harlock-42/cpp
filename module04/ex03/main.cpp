#include <string>
#include <iostream>
#include "color.hpp"

#include "AMateria.hpp"
#include "Ice.hpp"

int		main()
{
	Ice ice = Ice();
	Ice *lala = ice.clone();
	(void)lala;
	std::cout << lala->getType() << std::endl;
	delete lala;
	return (0);
}