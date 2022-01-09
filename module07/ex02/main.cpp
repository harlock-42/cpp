#include "Array.hpp"

int	main( void )
{

	std::cout << " ** empty array ** " << std::endl << std::endl;
	Array<int> empty;
	std::cout << empty << std::endl << std::endl;

	std::cout << " ** array of siz 10 ** " << std::endl << std::endl;

	Array <int>intArray(10);
	std::cout << intArray << std::endl << std::endl;
	for (size_t	i = 0; i < 10; ++i)
		intArray[i] = i;

	std::cout << " ** use of [] operator at the index 3 ** " << std::endl << std::endl;

	intArray[3] = 100;
	std::cout << intArray << std::endl << std::endl;
	std::cout << " ** Out of range : index 100 ** " << std::endl << std::endl;

	try
	{
		intArray[100] = 100;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}