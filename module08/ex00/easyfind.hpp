#ifndef EASYFIND_H
# define EASYFIND_H

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <exception>

class valueNotFoundException : public std::exception
{
	public:

	virtual	const	char	*what( void ) const throw()
	{
		return ("Error: Value not found");;
	}
};

template <typename T>

typename	T::iterator		easyfind( T iter, int nb )
{
	for (typename	T::iterator it = iter.begin(); it != iter.end(); ++it)
		if (*it == nb)
			return (it);
	throw valueNotFoundException();
	return (iter.end());
}


#endif