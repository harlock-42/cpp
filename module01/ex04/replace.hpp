#ifndef REPLACE_H
#define REPLACE_H

#include "header.hpp"

class Replace
{
	private:

		std::string	_buffer;
		std::string _path_file;
		int			_ret;

	public:
	
		Replace( void );
		~Replace( void );
		std::string	getFile(char *path_file);
		void		replace(std::string s1, std::string s2);
		void		toFile( void ) const;
		std::string	getBuffer( void ) const;
};

#endif