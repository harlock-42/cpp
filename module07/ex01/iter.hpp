#ifndef ITER_H
# define ITER_H

#include <string>
#include <iostream>


template<typename T, typename U>

void	iter(T *iter, U len, void function(T &nb))
{
	size_t	uint_len = static_cast<size_t>(len);

	for (size_t i = 0; i < uint_len; ++i)
		function(iter[i]);
	return ;
}

template< typename T >

void	function( T &nb )
{
	nb += 1;
}
#endif