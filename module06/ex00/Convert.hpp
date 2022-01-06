#ifndef CONVERT_H
# define CONVERT_H

# include <iostream>
# include <string>
# include <exception>
# include <ctype.h>
# include <sstream>
# include <stdio.h>
# include <stdlib.h>
# include <limits>
# include "math.h"

class Convert
{
	private:

		std::string	const	_str;
		
		char				_char;
		int					_int;
		float				_float;
		double				_double;
		bool				_intImp;
		bool				_charImp;

	public:

		// Canonical Form

		Convert( void );
		Convert( std::string str);
		Convert( Convert const &rhs );
		Convert &operator=( Convert const &rhs );
		~Convert( void );

		// Getter

		std::string	const	getStr( void ) const;
		char				getChar( void ) const;
		int					getInt( void ) const;
		float				getFloat( void ) const;
		double				getDouble( void ) const;
		bool				getIntImp( void ) const;
		bool				getCharImp( void ) const;

		// Setter

		// Action Methods

		std::string	uppercase( std::string str ) const;

		void	checkInput( std::string const str );

		bool	isChar( std::string const str ) const;
		bool	isInt( std::string str ) const;
		bool	isDouble( std::string str ) const;
		bool	isFloat( std::string str ) const;

		void	convertByChar( std::string str );
		void	convertByInt( std::string str );
		void	convertByFloat( std::string str );
		void	convertByDouble( std::string str );

		void	print( void ) const;

		// Exception class overload

		class CheckInput: public std::exception
		{
			private:

				std::string	const	_error;

			public:

				CheckInput( std::string const error ) throw() : _error(error) {}
				virtual	const	char	*what() const throw()
				{
					return (_error.c_str());
				}
				virtual	~CheckInput( void ) throw() {}
		};

};

#endif