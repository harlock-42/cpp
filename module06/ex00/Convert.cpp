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

Convert::Convert( std::string str ) : _str(str), _char('\0'), _int(0), _float(0.0f), _double(0.0)
{
	try
	{
		this->checkInput(_str);
		if (this->isChar(str) == true)
			convertByChar(str);
		else if (this->isInt(str) == true)
			convertByInt(str);
		else if (this->isFloat(str) == true)
			convertByFloat(str);
		else if (this->isDouble(str) == true)
			convertByDouble(str);		
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
	if (isdigit(*start) == 0 && *start != '-')
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
	if (count == 0 && *end == 'f')
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
	std::string::iterator	start = str.begin();
	std::string::iterator	end = str.end();

	if (*start == '-')
		++start;
	for (std::string::iterator it = start; it != end; ++ it)
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
** check if the string is a float
*/

bool	Convert::isFloat( std::string str ) const
{
	std::string::iterator	start = str.begin();
	std::string::iterator	end = str.end() - 1;

	if (str.length() <= 1)
		return false;
	if (*(str.end() - 1) != 'f')
		return false;
	for (std::string::iterator it = start; it != end + 1; ++it)
		if (*it == '.')
			return true;
	return false;
}

/*
** Do all the conversions, begining by char.
*/

void	Convert::convertByChar( std::string str )
{
	this->_char = *(str.begin());
	this->_int = this->_char;
	this->_float = this->_char;
	this->_double = this->_char;
	return ;
}

/*
** Do all the conversions, begining by integer.
*/

void	Convert::convertByInt( std::string str )
{
	this->_int = atoi(str.c_str());
	this->_char = (char)this->_int;
	this->_float = this->_int;
	this->_double = this->_int;
	return ;
}

/*
** Do all the conversions, begining by float.
*/

void	Convert::convertByFloat( std::string str )
{
	this->_float = (float)atof(str.c_str());
	this->_double = this->_float;
	this->_int = (int)this->_float;
	this->_char = (char)this->_char; // doesn't work
}

/*
** Do all the conversions, begining by float.
*/

void	Convert::convertByDouble( std::string str )
{
	this->_double = atof(str.c_str());
	this->_float = (float)this->_double;
	this->_int = (int)this->_double;
	this->_char = (char)this->_double; // doesn't work
}


/*
** Print all the conversions.
*/

void	Convert::print( void ) const
{
	if (this->_char >= 0 && this->_char <= 31)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << this->_char << std::endl;
	std::cout << "int: " << this->_int << std::endl;
	std::cout << "float: " << this->_float << std::endl;
	std::cout << "double: " << this->_double << std::endl;
}

/*
** ----------------------
*/