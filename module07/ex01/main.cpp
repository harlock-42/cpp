#include "iter.hpp"

int	main( void )
{
	int	tab[5] = {0, 1, 2, 3, 4};
	(void)tab;
	char	str[] = "abcde";
	size_t	len	= 5;
	
	std::cout << "** Original arrays **" << std::endl;
	
	for (size_t i = 0; i < len; ++i)
		std::cout << str[i] << " | " ;
	std::cout << std::endl;
	for (size_t i = 0; i < len; ++i)
		std::cout << tab[i] << " | " ;
	
	std::cout << std::endl << std::endl;
	
	std::cout << "** New arrays **" << std::endl;
	
	iter(str, len, function);
	iter(tab, len, function);
	for (size_t i = 0; i < len; ++i)
		std::cout << str[i] << " | " ;
	std::cout << std::endl;
	for (size_t i = 0; i < len; ++i)
		std::cout << tab[i] << " | " ;
	return (0);
}