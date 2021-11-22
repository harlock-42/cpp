#include <iostream>
#include "phone_book.class.hpp"

Phone_book::Phone_book( void )
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

Phone_book::~Phone_book( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}
