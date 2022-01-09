#include <iostream>
#include <string>
#include <vector>
#include <array>

int		main(void)
{
	std::vector<int>	intVec(5);
	std::array<int, 5>		intArr;

	for (size_t i = intVec.begin(); ; ++i)
		std::cout << intVec[i] << std::endl;
	for (size_t i = 0; i < 5; ++i)
		std::cout << intArr[i] << std::endl;
	return (0);
}