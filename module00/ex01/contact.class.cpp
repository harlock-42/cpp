#include "header.hpp"

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
	std::getline(std::cin, this->first_name);
	std::cout << "Last Name: ";
	std::getline(std::cin, this->last_name);
	std::cout << "Nickname: ";
	std::getline(std::cin, this->nickname);
	std::cout << "Phone Number: ";
	std::getline(std::cin, this->phone_number);
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, this->darkest_secret);
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

void		Contact::clear( void )
{
	this->first_name.clear();
	this->last_name.clear();
	this->nickname.clear();
	this->phone_number.clear();
	this->darkest_secret.clear();
	return ;
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
	std::cout << "         " << index << "|";
	std::cout << Contact::fix(this->first_name) << "|";
	std::cout << Contact::fix(this->last_name) << "|";
	std::cout << Contact::fix(this->nickname) << std::endl;
	std::cout.flush();
}

void	Contact::display_full( void ) const
{
	std::cout << "First name : " << this->first_name << std::endl;
	std::cout << "Last name : " << this->last_name << std::endl;
	std::cout << "Nickename : " << this->nickname << std::endl;
	std::cout << "Phone number : " << this->phone_number << std::endl;
}