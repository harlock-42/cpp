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
		void randomChump(std::string name);
		void setName(std::string name);
};

Zombie	*newZombie(std::string name);
void	randomChump( std::string name );

#endif