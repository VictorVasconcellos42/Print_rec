
#include "../includes/header.h"

int	main(int argc, char **argv)

{
	if (argc == 2)
	{
		ft_printf("%s\n", argv[1]);
	}
	else
		ft_printf("Invalid arguments\n.");
	return (0);
}
