#include "karen.hpp"

Karen::Karen( void )
{
	this->ft_ptr[0] = &Karen::debug;
	this->ft_ptr[1] = &Karen::info;
	this->ft_ptr[2] = &Karen::warning;
	this->ft_ptr[3] = &Karen::error;
	return ;
}

Karen::~Karen( void )
{
	return ;
}

void	Karen::debug( void )
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
	return ;
}

void	Karen::info( void )
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
	return ;
}

void	Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
	return ;
}

void	Karen::error( void )
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
	return ;
}

void	Karen::complain( std::string level )
{
	size_t	i = 0;
	std::string	tab[4] = {"debug", "info", "warning", "error"};

	while (i < 4)
	{
		if (tab[i].compare(level) == 0)
			break ;
		++i;
	}
	if (i == 4)
		return ;
	(this->*ft_ptr[i])();
	return ;
}
