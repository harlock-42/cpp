#include "header.hpp"

Phone_book::Phone_book( void )
{
	return ;
}

Phone_book::~Phone_book( void )
{
	return ;
}

static	int	ft_stoi(std::string str)
{
	int	nb = 0;
	int	sign = 1;
	int	i = 0;

	if (str[0] == '-')
	{
		++i;
		sign *= (-1);
	}
	while (str[i])
	{
		nb *= 10;
		nb += str[i] - '0';
		++i;
	}
	return (nb * sign);
}

static	int	is_only_digit(std::string str)
{
	for (int i = 0; str[i] != '\0'; ++i)
	{
		if (std::isdigit(str[i]) == 0)
			return (-1);
	}
	return (0);
}

void	Phone_book::start( void )
{
	int	i = 0;
	int	index = (-1);
	std::string input = "";

	while (input.compare("EXIT") != 0)
	{
		std::cout << "What do you want to do ?" << std::endl;
		std::getline(std::cin, input);
		if (input.compare("ADD") == 0)
		{
			std::cout << "Let's go adding a new contact" << std::endl;
			this->_contact[i].setdata();
			if (i < 7)
			{
				if (i == 7)
				{
					this->_contact[7].clear();
				}
				++i;
			}
		}
		else if (input.compare("SEARCH") == 0)
		{
			if (i == 0)
				std::cout << "Sorry, you don't added contact yet" << std::endl;
			else
			{
				std::cout << "     index|first name| last name|  nickname" << std::endl;
				std::cout << "-------------------------------------------" << std::endl;
				for (int j = 0; j <= i; ++j)
					this->_contact[j].display(j + 1);
				std::cout << "Choose a contact's id to have more information about it : ";
				std::getline(std::cin, input);
				index = (-1);
				if (input[0] != '\0' && is_only_digit(input) == 0)
					index = ft_stoi(input);
				if (index >= 0 && index < i)
					this->_contact[index].display_full();
				else
					std::cout << "\"" << input << "\"" << "is not recognized" << std::endl;
			}
		}
	}
	return ;
}