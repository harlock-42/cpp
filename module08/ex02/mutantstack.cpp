#include "mutantstack.hpp"

// Constructor by copie
 
template< typename T >
MutantStack<T>::MutantStack( const MutantStack<T> &src )
{
	*this = src;
}

// overload assignment operator

template< typename T >
MutantStack<T>	&MutantStack<T>::operator=( const MutantStack<T>& rhs ) 
{
	this->c = rhs.c;
	return *this;
}
