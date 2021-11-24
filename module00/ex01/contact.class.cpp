#include "header.hpp"
#include <ios>
#include <limits>

Contact::Contact( void )
{
	return ;
}

Contact::~Contact( void )
{
	return ;
}

void	Contact::setdata( void )
{
	std::cout << "First Name: ";
	std::cin >> this->first_name;
	std::cout << "Last Name: ";
	std::cin >> this->last_name;
	std::cout << "Nickname: ";
	std::cin >> this->nickname;
	std::cout << "Phone Number: ";
	std::cin >> this->phone_number;
	std::cout << "Darkest Secret: ";
	std::cin >> this->darkest_secret;
	return ;
}

std::string	Contact::getdata(std::string const str) const
{
	if (str.compare("first_name") == 0)
		return this->first_name;
	if (str.compare("last_name") == 0)
		return this->last_name;
	if (str.compare("nickname") == 0)
		return this->nickname;
	if (str.compare("phone_number") == 0)
		return this->phone_number;
	if (str.compare("darkest_secret") == 0)
		return this->darkest_secret;
	return "";
}

std::string Contact::fix(std::string str) const
{
	std::string space = "";

	if (str.length() < 10)
	{
		for (int i = 0; i < 10 - (int)str.length(); ++i)
			space.append(" ");
		space.append(str);
		str = space;
	}	
	else
	{
		str.resize(9);
		str.resize(10, '.');
	}
	return (str);
}

void	Contact::display( int index ) const
{
	std::string i = std::to_string(index);
	std::cout << Contact::fix(i) << "|";
	std::cout << Contact::fix(this->first_name) << "|";
	std::cout << Contact::fix(this->last_name) << "|";
	std::cout << Contact::fix(this->nickname) << std::endl;
	std::cout.flush();
}