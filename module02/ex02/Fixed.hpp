#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <string>
#include <math.h>

class Fixed
{
	private:

		int					_value;
		int	static	const	_binary_point;

	public:

		Fixed( void );
		~Fixed( void );
		Fixed( Fixed const & src );
		Fixed( int const to_fix );
		Fixed( float const to_fix );
		Fixed	&operator=( Fixed const &rhs );
		bool	operator==( Fixed const &rhs ) const;
		bool	operator!=( Fixed const &rhs ) const;
		bool	operator<( Fixed const &rhs ) const;
		bool	operator>( Fixed const &rhs ) const;
		bool	operator>=( Fixed const &rhs ) const;
		bool	operator<=( Fixed const &rhs ) const;
		Fixed	operator+( Fixed const &rhs ) const;
		Fixed	operator-( Fixed const &rhs ) const;
		Fixed	operator*( Fixed const &rhs ) const;
		Fixed	operator/( Fixed const &rhs ) const;
		Fixed	&operator++( void );
		Fixed	&operator--( void );
		Fixed	operator++( int );
		Fixed	operator--( int );
		int		getValue( void ) const;
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		int		toInt( void ) const;
		float	toFloat( void ) const;
		static	Fixed const	&min(Fixed const &lhs, Fixed const &rhs);
		static	Fixed const	&max(Fixed const &lhs, Fixed const &rhs);
		Fixed	&min(Fixed &lhs, Fixed &rhs);
		Fixed	&max(Fixed &lhs, Fixed &rhs);
};

std::ostream	&operator<<( std::ostream &os, Fixed const & rhs );

#endif