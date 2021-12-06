#include "karen.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	Karen k = Karen();
	k.complain_moderate(argv[1]);
	return (0);
}
