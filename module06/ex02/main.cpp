#include "Base.hpp"

#include <string>
#include <iostream>
#include <time.h>
#include <stdlib.h>

Base	*generate( void )
{
	unsigned int rand_value;

	srand(time(NULL));
	rand_value = (rand() % 3) + 1;
	switch (rand_value)
	{
		case 1:
		return (new A());
		break ;
		case 2:
		return (new B());
		break ;
		case 3:
		return (new C());
		break ;
	}
	return (new Base());
}

void	identify( Base *p )
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown type" << std::endl;  
	return ;
}

void	identify( Base &p )
{
	try
	{
		A a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch (...) {}
	try
	{
		B b = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch (...) {}
	try
	{
		C c = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch (...) {}

}

int		main( void )
{
	Base *base = generate();

	identify(base);
	identify(*base);
	delete base;
	return (0);
}