
#include "easyfind.hpp"



int		main(void)
{
	std::vector<int>	intVec(5);
	for (std::vector<int>::iterator it = intVec.begin(); it != intVec.end(); ++it)
		*it = *it + 1;
	
	std::list<int>	intlst(5);
	for (std::list<int>::iterator it = intlst.begin(); it != intlst.end(); ++it)
		*it = *it + 1;

	try
	{
		std::cout << *easyfind(intVec, 1) << std::endl;
		std::cout << *easyfind(intlst, 0) << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}