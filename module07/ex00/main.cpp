#include "template.h"

int	main( void )
{
	int		a = 21;
	int		b = 42;
	std::string	c = "salut";
	std::string d = "Yo";

	// max
	std::cout << "Max of " << a << " and " << b << " is ";
	std::cout << max<int>(a, b) << std::endl;


	std::cout << "Max of " << c << " and " << d << " is ";
	std::cout << ::max<std::string>(c, d) << std::endl << std::endl;

	// min
	std::cout << "Min of " << a << " and " << b << " is ";
	std::cout << min<int>(a, b) << std::endl;


	std::cout << "Min of " << c << " and " << d << " is ";
	std::cout << ::min<std::string>(c, d) << std::endl << std::endl;
	
	// swap
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "Swappingggg ..." << std::endl;
	swap(a, b);
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl << std::endl;
	
	
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "Swappingggg ..." << std::endl;
	swap(c, d);
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl << std::endl;
}

