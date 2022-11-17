
#include "../includes/header.h"

void	rush(int width, int height)

{
	
}

int	main(int argc, char **argv)

{
	if (argc == 3)
		rush(ft_atoi(argv[1]), ft_atoi(argv[2]));	
	else
		ft_printf("Invalid arguments\n.");
	return (0);
}
