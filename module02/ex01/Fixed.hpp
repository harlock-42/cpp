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
		Fixed	&operator=( Fixed const & rhs );
		int		getValue( void ) const;
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		int		toInt( void ) const;
		float	toFloat( void ) const;
};

std::ostream	&operator<<( std::ostream &os, Fixed const & rhs );

#endif