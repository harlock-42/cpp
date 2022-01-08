#include "Array.hpp"

int	main( void )
{
	Array <int>intArray(10);

	for (size_t	i = 0; i < 10; ++i)
		intArray[i] = i;
	std::cout << intArray << std::endl;
	Array<int>	arr2 = intArray;

	arr2 = arr2;



	try
	{
		arr2[100] = 100;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << arr2 << std::endl;
}