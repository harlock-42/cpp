#include "Convert.hpp"

/*
** ----------------------
** --- CANONICAL FORM ---
** ----------------------
*/

/*
** Constructor by default
*/

Convert::Convert( void ) : _str("0"), _char('\0'), _int(0), _float(0.0f), _double(0.0), _intImp(false), _charImp(false)
{
	//std::cout << Convert: Constructor by default called << std::endl;
	return ;
}

/*
** Constructor by str
*/

Convert::Convert( std::string str ) : _str(str), _char('\0'), _int(0), _float(0.0f), _double(0.0), _intImp(false), _charImp(false)
{
	try
	{
		this->checkInput(_str);
		if (str == "nan" || str == "inf" || str == "-inf")
			convertByDouble(uppercase(str));
		else if (str == "nanf" || str == "inff" || str == "-inff")
			convertByFloat(uppercase(str));
		else if (this->isChar(str) == true)
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

Convert::Convert( Convert const &rhs ) : _str(rhs.getStr()), _char(rhs.getChar()), _int(rhs.getInt()), _float(rhs.getFloat()), _double(rhs.getDouble()), _intImp(rhs.getIntImp()), _charImp(rhs.getCharImp())
{
	//std::cout << Convert: Constructor by copie called << std::endl;
	return ;
}

/*
** Assignment Overload
*/

Convert	&Convert::operator=( Convert const & rhs )
{

	if (&rhs != this)
		*this = rhs;
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

std::string	const	Convert::getStr( void ) const
{
	return (this->_str);
}

double				Convert::getDouble( void ) const
{
	return (this->_double);
}

char				Convert::getChar( void ) const
{
	return (this->_char);
}

int					Convert::getInt( void ) const
{
	return (this->_int);
}

float				Convert::getFloat( void ) const
{
	return (this->_float);
}

bool				Convert::getIntImp( void ) const
{
	return (this->_intImp);
}

bool				Convert::getCharImp( void ) const
{
	return (this->_charImp);
}

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
**	Convert a string to uppercase.
*/

std::string		Convert::uppercase( std::string str ) const
{
	for (std::string::iterator it = str.begin(); it != str.end(); ++it)
		if (*it >= 'a' && *it <= 'z')
			*it = toupper(*it);
	return (str);
}

/*
** check if the string is a scalable
*/

void	Convert::checkInput( std::string str )
{
	int	count	= 0;
	std::string::iterator	start = str.begin();
	std::string::iterator	end = str.end() - 1;

	if (str == "nan" || str == "inf" || str == "-inf" || str == "nanf" || str == "inff" || str == "-inff")
		return ;
	if (str.length() == 1)
		return ;
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
	this->_int = static_cast<int>(this->_char);
	this->_float = static_cast<float>(this->_char);
	this->_double = static_cast<double>(this->_char);
	return ;
}

/*
** Do all the conversions, begining by integer.
*/

void	Convert::convertByInt( std::string str )
{
	this->_int = atoi(str.c_str());
	this->_char = static_cast<char>(this->_int);
	this->_float = static_cast<float>(this->_int);
	this->_double = static_cast<double>(this->_int);
	return ;
}

/*
** Do all the conversions, begining by float.
*/

void	Convert::convertByFloat( std::string str )
{
	if (str == "NANF")
	{
		this->_intImp = true;
		this->_charImp = true;
		this->_double = NAN;
		this->_float = NAN;
	}
	else if (str == "INFF")
	{
		this->_float = (1.0) / (0.0);
		this->_int = std::numeric_limits<int>::max();
		this->_char = static_cast<char>(this->_float);
		this->_double = static_cast<double>(this->_float);
	}
	else if (str == "-INFF")
	{
		this->_float = (-1.0) / (0.0);
		this->_int = static_cast<int>(this->_float);
		this->_char = static_cast<char>(this->_float);
		this->_double = static_cast<double>(this->_float);
	}
	else
	{
		this->_float = atof(str.c_str());
		this->_double = static_cast<double>(this->_float);
		this->_int = static_cast<int>(this->_float);
		this->_char = static_cast<char>(this->_float);
	}
	return ;
}

/*
** Do all the conversions, begining by float.
*/

void	Convert::convertByDouble( std::string str )
{
	if (str == "NAN")
	{
		this->_intImp = true;
		this->_charImp = true;
		this->_double = NAN;
		this->_float = NAN;
	}
	else if (str == "INF")
	{
		this->_double = std::numeric_limits<double>::infinity();
		this->_int = std::numeric_limits<int>::max();
		this->_char = static_cast<char>(this->_double);
		this->_float = static_cast<float>(this->_double);
	}
	else if (str == "-INF")
	{
		this->_double = -std::numeric_limits<double>::infinity();
		this->_int = static_cast<int>(this->_double);
		this->_char = static_cast<char>(this->_double);
		this->_float = static_cast<float>(this->_double);
	}
	else
	{
		this->_double = atof(str.c_str());
		this->_float = static_cast<float>(this->_double);
		this->_int = static_cast<int>(this->_double);
		this->_char = static_cast<char>(this->_double);
	}
	return ;
}


/*
** Print all the conversions.
*/

void	Convert::print( void ) const
{
	if (this->_charImp == true)
		std::cout << "char: impossible" << std::endl;
	else if (this->_char >= 0 && this->_char <= 31)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << this->_char << std::endl;
	if (this->_intImp == true)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << this->_int << std::endl;
	std::cout << "float: " << this->_float << std::endl;
	std::cout << "double: " << this->_double << std::endl;
	return ;
}

/*
** ----------------------
*/