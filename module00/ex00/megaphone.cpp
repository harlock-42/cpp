#include <iostream>

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE NOISE *";
		return (0);
	}
	std::string str = "";
	for (int i = 1; argv[i] != NULL; ++i)
		str += argv[i];
	for (int j = 0; str[j] != '\0'; ++j)
		if (str[j] >= 'a' && str[j] <= 'z')
			str[j] = ::toupper(str[j]);
	std::cout << str;
	return (0);
}
