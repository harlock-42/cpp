#ifndef SPAN_H
# define SPAN_H

# include <iostream>
# include <string>
# include <vector>
# include <exception>
# include <algorithm>
# include <climits>

class Span
{
	private:

		std::vector< int >	_vec;
		unsigned int		_N;

	public:

		// Canonical Form
		Span( void );
		Span( unsigned int nb );
		Span( Span const &rhs );
		Span &operator=( Span const &rhs );

		~Span( void );

		// Getter

		std::vector< int >	getIter( void ) const;

		//Setter

		// Action Methods

		void	addNumber( int nb );
		unsigned int		longestSpan( void ) const;
		unsigned int		shortestSpan( void ) const;

		// Exception
	
		class	FullStorageException : public std::exception
		{
			public:

				virtual char const *what( void ) const throw()
				{
					return ("Error: Storage is full");
				}
		};

		class NoSpanToFindException : public std::exception
		{
			public:

				virtual char const *what( void ) const throw()
				{
					return ("Error: No span to find");
				}
		};

};

std::ostream	&operator<<( std::ostream &os, Span	const &rhs );

#endif