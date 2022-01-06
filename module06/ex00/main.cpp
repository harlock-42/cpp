#include <string>
#include <iostream>
#include "Convert.hpp"

int		main( int argc, char **argv )
{
	if (argc != 2)
		return (1);
	(void)argv;
	std::string str = argv[1];
	Convert	cvt = Convert((std::string)str);
	cvt.print();


	return (0);
}