#ifndef ARRAY_H
# define ARRAY_H

# include <iostream>

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
			return;
		}

		~Array( void )
		{
			delete [] this->getArray();
			std::cout << "destruction\n";
		}

		// Getter

		T	*getArray( void ) const
		{
			return (this->_array);
		}

		// Overload

		T	&operator[]( int index )
		{
			std::cout << index << std::endl;
			return (_array[index]);
		}
};

#endif