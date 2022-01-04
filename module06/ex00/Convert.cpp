#include "Convert.hpp"

/*
** ----------------------
** --- CANONICAL FORM ---
** ----------------------
*/

/*
** Constructor by default
*/

Convert::Convert( void )
{
	//std::cout << Convert: Constructor by default called << std::endl;
	return ;
}

/*
** Constructor by str
*/

Convert::Convert( std::string str ) : _str(str)
{
	try
	{
		this->checkInput(_str);
		std::cout << this->isChar(_str) << std::endl;
		std::cout << this->isInt(_str) << std::endl;
		std::cout << this->isDouble(_str) << std::endl;
	}
	catch ( std::exception const &e )
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	return ;
}

/*
** Constructor by copie
*/

Convert::Convert( Convert const &rhs )
{
	//std::cout << Convert: Constructor by copie called << std::endl;
	if (&rhs != this)
		*this = Convert(rhs);
	return ;
}

/*
** Assignment Overload
*/

Convert	&Convert::operator=( Convert const & rhs )
{

	if (&rhs != this)
		*this = Convert(rhs);
	return ( *this );
}

/*
** Destructor
*/

Convert::~Convert( void )
{
	//std::cout << Convert: Destructor called << std::endl;
	return ;
}

/*
** ----------------------
*/

/*
** --------------
** --- GETTER ---
** --------------
*/

/*
** --------------
*/

/*
** --------------
** --- SETTER ---
** --------------
*/

/*
** --------------
*/

/*
** ----------------------
** --- ACTION METHODS ---
** ----------------------
*/

/*
** check if the string is a scalable
*/

void	Convert::checkInput( std::string str )
{
	int	count	= 0;
	std::string::iterator	start = str.begin();
	std::string::iterator	end = str.end() - 1;

	if (str.length() == 1)
	{
		this->_isChar = true;
		return ;
	}
	if (isdigit(*start) == 0 && *end != '-')
		throw CheckInput("\"" + str + "\" is not a scalar");
	if (isdigit(*end) == 0 && *end != 'f' && *end != '.')
		throw CheckInput("\"" + str + "\" is not a scalar");
	for (std::string::iterator	it = start + 1; it != end; ++it)
	{
		if (*it == '.')
			++count;
		if (*it != '.' && isdigit(*it) == 0)
			throw CheckInput("\"" + str + "\" is not a scalar");
	}
	if (count > 1)
		throw CheckInput("\"" + str + "\" is not a scalar");
	return ;
}

/*
** check if the string is a char
*/

bool	Convert::isChar( std::string const str ) const
{
	if (str.length() == 1 && isdigit(str[0]) == 0)
		return (true);
	return (false);
}

/*
** check if the string is an integer
*/

bool	Convert::isInt( std::string str ) const
{
	for (std::string::iterator it = str.begin(); it != str.end(); ++ it)
		if (isdigit(*it) == 0)
			return (false);
	return (true);
}

/*
** check if the string is a double
*/

bool	Convert::isDouble( std::string str ) const
{
	std::string::iterator	start = str.begin();
	std::string::iterator	end = str.end() - 1;

	if (str.length() <= 1)
		return false;
	if (*(str.end() - 1) == 'f')
		return false;
	for (std::string::iterator it = start; it != end + 1; ++it)
		if (*it == '.')
			return true;
	return false;
}

/*
** ----------------------
*/