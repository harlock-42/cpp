#include "header.hpp"

std::string		get_str_from_file(char *path_file)
{
	std::ifstream	ifs;
	int				len;

	ifs.open(path_file);
	if (ifs.is_open() == False)
	{
		std::cout << "Error: can't open \"" << path_file << "\" file" << std::endl;
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
	return (str);
}

int		main(int argc, char **argv)
{

	if (argc != 4)
	{
		std::cout << "Error: wrong number of arguments" << std::endl;
		return (1);
	}
	Replace rep = Replace();
	std::string str = rep.getFile(argv[1]);
	std::cout << str << std::endl;
	rep.replace(argv[2], argv[3]);
	return (0);
}