#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <string>

class Fixed
{
	private:

		int					_value;
		static	const	int	_binary_point = 8;

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