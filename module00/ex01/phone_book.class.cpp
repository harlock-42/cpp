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
		std::getline(std::cin, input);
		if (input.compare("ADD") == 0)
		{
			std::cout << "Let's go adding a new contact" << std::endl;
			if (i < 8)
			{
				this->_contact[i].setdata();
				++i;
 			}
			else
				this->_contact[7].setdata();
		}
		else if (input.compare("SEARCH") == 0)
		{
			if (i == 0)
				std::cout << "Sorry, you don't added contact yet" << std::endl;
			else
			{
				std::cout << "     index|first name| last name|  nickname" << std::endl;
				std::cout << "-------------------------------------------" << std::endl;
				for (int j = 0; j < 8 && j < i; ++j)
					this->_contact[j].display(j + 1);
				std::cout << "Choose a contact's id to have more information about it : ";
				std::getline(std::cin, input);
				if (input.length() > 1) 
					std::cout << "Wrong input" << std::endl;
				else if (input[0] <= '0' || input[0] > (i + '0'))
					std::cout << "Wrong input" << std::endl;
				else
				{
					this->_contact[(input[0] - '0') - 1].display_full();
				}
			}
		}
	}
	return ;
}