#include "header.hpp"

Replace::Replace( void ) : _buffer(""), _path_file(""), _ret(True)
{
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
	this->_path_file = path_file;
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
	std::size_t	len = s1.length();
	std::size_t	pos = -1;
	(void)s2;

	while ((pos = this->_buffer.find(s1, pos + 1)) != std::string::npos)
	{
		this->_buffer.erase(pos, len);
		this->_buffer.insert(pos, s2);
	}
	return ;
}

void		Replace::toFile( void ) const
{
	std::string			ext = ".replace";
	std::string			path_file = this->_path_file;

	path_file.append(ext);
	std::ofstream	outfile(path_file);
	outfile << this->_buffer << std::endl;
	outfile.close();
	return ;
}

std::string	Replace::getBuffer( void ) const
{
	return (this->_buffer);
}