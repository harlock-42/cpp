#include "header.hpp"

Phone_book::Phone_book( void )
{
	return ;
}

Phone_book::~Phone_book( void )
{
	return ;
}

void	Phone_book::start( void )
{
	int	i = 0;
	std::string input = "";

	while (input.compare("EXIT") != 0)
	{
		std::cout << "What do you want to do ?" << std::endl;
		std::cin >> input;
		if (input.compare("ADD") == 0)
		{
			std::cout << "Let's go adding a new contact" << std::endl;
			this->_contact[i].setdata();
			if (i < 8)
				++i;
		}
		else if (input.compare("SEARCH") == 0)
		{
			std::cout << " TEST BIEN NUL" << std::endl;
			for (int j = 0; j < i; ++j)
				this->_contact[j].display(j);
		}
	}
	return ;
}