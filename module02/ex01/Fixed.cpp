#include "Fixed.hpp"

int	const		Fixed::_binary_point = 8;

Fixed::Fixed( void ) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
	(void)this->_value;
	return ;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed( int const to_fix)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = to_fix << this->_binary_point;
}

Fixed::Fixed ( float const to_fix)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(to_fix * (1 << this->_binary_point));
	return ;
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = rhs.getRawBits();
	return (*this);
}

int		Fixed::getRawBits( void ) const
{
	return (this->_value);
}

void		Fixed::setRawBits( int const raw)
{
	this->_value = raw;
}

std::ostream	&operator<<(std::ostream &os, Fixed const &rhs)
{
	os << rhs.toFloat();
	return (os);
}

int			Fixed::toInt( void ) const
{
	return (this->_value >> this->_binary_point);
}

float		Fixed::toFloat( void ) const
{
	return ((float)this->_value / (1 << this->_binary_point));
}
