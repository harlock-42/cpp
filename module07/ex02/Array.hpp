#ifndef ARRAY_H
# define ARRAY_H

# include <iostream>
# include <exception>

template< typename T >
class Array
{
	private:

		T				*_array;
		unsigned	int	_size;

	public:

		Array( void ) : _array( new T[0] )
		{
			return ;
		}

		Array( unsigned int i = 0 ) : _array( new T[i] ), _size(i)
		{
			for (size_t i = 0; i < this->getSize(); ++i)
			{
				this->_array[i] = T();
			}
			return;
		}

		// Constructor by copie

		Array( const Array<T> &rhs ) : _array( new T[rhs.getSize()] ), _size( rhs.getSize())
		{
			for (size_t i = 0; i < rhs.getSize(); ++i)
				this->_array[i] = rhs[i];
		}

		~Array( void )
		{
			delete [] this->_array;
		}

		// Getter

		T	*getArray( void ) const
		{
			return (this->_array);
		}

		unsigned int	getSize( void ) const
		{
			return (this->_size);
		}

		// Overload

		Array<T>	&operator=(const Array<T> &rhs )
		{
			this->_size = rhs.getSize();
			delete [] this->getArray();
			this->_array = new T[rhs.getSize()];
			for (size_t i = 0; i < rhs.getSize(); ++i)
				this->_array[i] = rhs[i];
			return (*this);
		}

		T	&operator[]( unsigned int index ) const
		{
			if (index >= this->getSize())
				throw OutOfLimitException();
			return (this->_array[index]);
		}

		// exception

		class OutOfLimitException : public std::exception
		{
			public:

				virtual const char *what( void ) const throw()
				{
					return ("Index out of range");
				}
		};
};

template < typename T >
std::ostream	&operator<<( std::ostream &os, const Array<T> &array )
{
	os << "[";
	for ( size_t i = 0; i < array.getSize(); ++i)
	{
		os << array[i];
		if (i < array.getSize() - 1)
			os << ", ";
	}
	os << "]";
	return (os);
}

#endif