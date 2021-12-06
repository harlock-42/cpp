#ifndef KAREN_H
#define KAREN_H

#include <iostream>
#include <string>

class Karen
{
	private:

		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );

	public:

		Karen( void );
		~Karen( void );
		void	complain( std::string level);
		void	complain_moderate( std::string level);
		
		void	(Karen::*ft_ptr[4])( void );
};

#endif