#include "span.hpp"

/*
** ----------------------
** --- CANONICAL FORM ---
** ----------------------
*/

/*
** Constructor by default
*/

Span::Span( void )
{
	return ;
}

/*
** Constructor by first value
*/

Span::Span( unsigned int nb ) : _N(nb)
{
	return ;
}

/*
** Constructor by copie
*/

Span::Span( Span const &rhs )
{
	this->_N = rhs._N;
	this->_vec.resize(rhs._vec.size());
	this->_vec = rhs._vec;
	return ;
}

/*
** Assignment Overload
*/

Span	&Span::operator=( Span const & rhs )
{
	this->_N = rhs._N;
	this->_vec.resize(rhs._vec.size());
	this->_vec = rhs._vec;
	return ( *this );
}

/*
** Destructor
*/

Span::~Span( void )
{
	this->_vec.clear();
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

std::vector< int >	Span::getIter( void ) const
{
	return (this->_vec);
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

void	Span::addNumber( int nb )
{
	try
	{
		if (this->_vec.size() >= this->_N)
			throw FullStorageException();
		this->_vec.push_back(nb);
	}
	catch ( const std::exception &e )
	{
		std::cerr << e.what() << std::endl;
	}
	return ;
}

unsigned	int	Span::longestSpan( void ) const
{
	std::vector<int>::iterator	max;

	try
	{
		if (this->_vec.size() <= 1)
			throw NoSpanToFindException();
		std::vector<const int>::iterator min = std::min_element(this->_vec.begin(), this->_vec.end());
		std::vector<const int>::iterator max = std::max_element(this->_vec.begin(), this->_vec.end());
		return (std::max(*min, *max) - std::min(*min, *max));
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}

unsigned	int	Span::shortestSpan( void ) const
{
	std::vector< int >				cpy = this->_vec;
	std::vector< int >::iterator	first;
	std::vector< int >::iterator	second;
	unsigned int					res = UINT_MAX;
	unsigned int					tmp = 0;

	try
	{
		if (this->_vec.size() <= 1)
			throw NoSpanToFindException();
		std::sort(cpy.begin(), cpy.end());
		first = cpy.begin();
		second = cpy.begin() + 1;
		for (std::vector< int >::iterator it = second; it != cpy.end(); ++it)
		{
			tmp = std::max(*first, *second) - std::min(*first, *second);
			if (tmp < res)
				res = tmp;
			++first;
			++second;
		}
		return (res);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}

/*
** ----------------------
*/

std::ostream	&operator<<( std::ostream &os, Span const &rhs )
{
	os << "[";
	for (std::vector<int>::iterator it = rhs.getIter().begin(); it != rhs.getIter().end(); ++it)
	{
		os << *it;
		if (it + 1 != rhs.getIter().end())
			os << ", ";
	}
	os << "]";
	return (os);
}