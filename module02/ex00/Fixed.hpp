#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <string>

class Fixed
{
	private:

		int					_value;
		int	static	const	_binary_point;

	public:

		Fixed( void );
		~Fixed( void );
		Fixed( Fixed const & src);
		Fixed	&operator=( Fixed const & rhs);
		int		getValue( void ) const;
		int		getRawBits( void ) const;
		void	setRawBits( int const raw);
};

#endif