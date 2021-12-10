#include "Fixed.hpp"

int	const		Fixed::_binary_point = 8;

Fixed::Fixed( void ) : _value(0)
{
	return ;
}

Fixed::~Fixed( void )
{
	return ;
}

Fixed::Fixed( Fixed const &src)
{
	*this = src;
}

Fixed::Fixed( int const to_fix)
{
	this->_value = to_fix << this->_binary_point;
}

Fixed::Fixed ( float const to_fix)
{
	this->_value = roundf(to_fix * (1 << this->_binary_point));
	return ;
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	this->_value = rhs.getRawBits();
	return (*this);
}

bool	Fixed::operator==(Fixed const &rhs) const
{
	if (this->_value == rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed const &rhs) const
{
	if (this->_value != rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<(Fixed const &rhs) const
{
	if (this->_value < rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>(Fixed const &rhs) const
{
	if (this->_value > rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const &rhs) const
{
	if (this->_value >= rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const &rhs) const
{
	if (this->_value >= rhs.getRawBits())
		return (true);
	return (false);
}

Fixed	Fixed::operator+(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed	&Fixed::operator++( void )
{
	this->_value++;
	return (*this);
}

Fixed	Fixed::operator++( int )
{
	Fixed	temp = *this;
	++*this;
	return temp;
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

Fixed	const		&Fixed::min( Fixed const &lhs, Fixed const &rhs )
{
	if (lhs.toFloat() < rhs.toFloat())
		return (lhs);
	return (rhs);
}

Fixed	const		&Fixed::min( Fixed const &lhs, Fixed const &rhs )
{
	if (lhs.toFloat() < rhs.toFloat())
		return (lhs);
	return (rhs);
}
