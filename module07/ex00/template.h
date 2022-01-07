#include <iostream>

template< typename T >

T const &max( T const &x, T const &y)
{
	if (x < y)
		return y;
	return x;
}

template< typename T >

T const &min( T const &x, T const &y)
{
	if (x <= y)
		return x;
	return y;
}

template< typename T >

void	swap( T &x,T &y )
{
	T	tmp = x;

	x = y;
	y = tmp;
	return ;
}