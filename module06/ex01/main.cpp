#include <string>
#include <iostream>
#include <stdint.h>

class Data {};

uintptr_t	f(Data *data)
{
	void	*value = static_cast<void *>(data);
	return (reinterpret_cast<uintptr_t>(value));
}

Data		*deserialize( uintptr_t raw )
{
	return (reinterpret_cast<Data *>(raw));
}

int		main(void)
{
	Data *data = new Data();
	std::cout << &data << std::endl;
	uintptr_t a = f(data);
	std::cout << a << std::endl;
	Data *data2 = deserialize(a);
	std::cout << data2 << std::endl;
	// data
	return (0);
}