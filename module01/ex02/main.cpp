#include <iostream>
#include <string>

int main()
{
	std::string		string = "HI THIS IS BRAIN";
	
	std::string		*stringPTR = &string;
	std::string		&stringREF = string;

	std::cout << "string pointer address:\t\t";
	std::cout << &string << std::endl << std::endl;
	std::cout << "string pointer address:\t\t";
	std::cout << stringPTR << std::endl;
	std::cout << "string reference address:\t";
	std::cout << &stringREF << std::endl << std::endl;
	
	std::cout << "string pointer value:\t\t";
	std::cout << *stringPTR << std::endl;
	std::cout << "string reference value:\t\t";
	std::cout << stringREF << std::endl;
	return (0);
}