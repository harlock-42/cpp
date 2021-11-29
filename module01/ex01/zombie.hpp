#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>

class Zombie
{
	private:

		std::string name;
	
	public:

		Zombie( void );
		~Zombie( void );
		void announce( void ) const;
		void setName(std::string name);
};

Zombie*		zombieHorde(int N, std::string name);

#endif