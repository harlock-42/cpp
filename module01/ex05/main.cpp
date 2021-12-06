#include "karen.hpp"

int	main()
{
	Karen k = Karen();
	std::cout << "[ DEBUG ]" << std::endl << std::endl;
	k.complain("debug");
	std::cout << std::endl << "[ INFO ]" << std::endl << std::endl;
	k.complain("info");
	std::cout << std::endl << "[ WARNING ]" << std::endl << std::endl;
	k.complain("warning");
	std::cout << std::endl << "[ ERROR ]" << std::endl << std::endl;
	k.complain("error");
	return (0);
}
