#include "header.hpp"

Replace::Replace( void ) : _buffer(""), _ret(True)
{
	(void)_ret;
	(void)_buffer;
	return ;
}

Replace::~Replace( void )
{
	return ;
}

std::string	Replace::getFile(char *path_file)
{
	std::ifstream	ifs;
	int				len;

	ifs.open(path_file);
	if (ifs.is_open() == False)
	{
		std::cout << "Error: can't open \"" << path_file << "\" file" << std::endl;
		this->_ret = False;
		return ("");
	}
	ifs.seekg(0, ifs.end);
	len = ifs.tellg();
	ifs.seekg(0, ifs.beg);
	char	*buffer = new char[len];

	ifs.read(buffer, len);
	buffer[len] = '\0';
	std::string		str = buffer;
	delete [] buffer;
	ifs.close();
	this->_buffer = str;
	return (str);
}

void		Replace::replace(std::string s1, std::string s2)
{
	(void)s1;
	(void)s2;
	return ;
}