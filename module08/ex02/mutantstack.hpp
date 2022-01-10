#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

# include <stack>
# include <iostream>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:

		MutantStack() {}
		
		MutantStack(const MutantStack<T>& src);

		// overload assignment operator

		MutantStack<T>& operator=(const MutantStack<T>& rhs);


		~MutantStack() {}


		// Iterator methods

		typedef typename std::stack<T>::container_type::iterator iterator;
		
		iterator begin()
		{ 
			return this->c.begin();
		}

		iterator end() 
		{ 
			return this->c.end();
		}
};

#endif