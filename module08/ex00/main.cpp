
#include "easyfind.hpp"



int		main(void)
{
	int	i = 0;
	std::vector<int>	intVec(5);
	for (std::vector<int>::iterator it = intVec.begin(); it != intVec.end(); ++it)
		*it = *it + 1;
	
	std::list<int>	intlst(5);
	for (std::list<int>::iterator it = intlst.begin(); it != intlst.end(); ++it)
	{
		*it = i;
		++i;
	}


	try
	{
		std::cout << *easyfind(intVec, 1) << std::endl;
		std::cout << *easyfind(intVec, 6) << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << *easyfind(intlst, 4) << std::endl;
		std::cout << *easyfind(intlst, 10) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}