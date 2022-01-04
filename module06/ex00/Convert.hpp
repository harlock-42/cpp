#ifndef CONVERT_H
# define CONVERT_H

# include <iostream>
# include <string>
# include <exception>
# include <ctype.h>

class Convert
{
	private:

		std::string	const	_str;
		bool				_isChar;

	public:

		// Canonical Form

		Convert( void );
		Convert( std::string str);
		Convert( Convert const &rhs );
		Convert &operator=( Convert const &rhs );
		~Convert( void );

		// Getter

		// Setter

		// Action Methods

		void	checkInput( std::string const str );
		bool	isChar( std::string const str ) const;
		bool	isInt( std::string str ) const;
		bool	isDouble( std::string str ) const;

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