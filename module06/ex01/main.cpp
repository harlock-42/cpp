#include <string>
#include <iostream>
#include <stdint.h>

typedef	struct	s_data
{
	int		value;
}				t_data;

uintptr_t	serialize(t_data *data)
{
	return (reinterpret_cast<uintptr_t>(data));
}

t_data		*deserialize( uintptr_t raw )
{
	return (reinterpret_cast<t_data *>(raw));
}

int		main(void)
{
	t_data	*data = new t_data;
	data->value = 42;
	std::cout << "addr = " << data << std::endl;
	uintptr_t	serialize_data = serialize(data);
	std::cout << "addr uint = " << serialize_data << std::endl;
	t_data	*deserialize_data = deserialize(serialize_data);
	std::cout << "addr = " << deserialize_data << std::endl;
	return (0);
}