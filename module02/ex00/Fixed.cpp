#include "Fixed.hpp"

int		Fixed::_binary_point = 0;

Fixed::Fixed( void ) : _value(0)
{
	(void)this->_value;
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed const &src)
{
	*this = src;
	std::cout << "Copy constructor called" << std::endl;
}

int		Fixed::getValue( void ) const
{
	return (this->_value);
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = rhs.getValue();
	return (*this);
}

int		Fixed::getRawBits( void ) const
{
	return (this->_value);
}

void		Fixed::setRawBits( int const raw)
{
	this->_binary_point = raw;
}