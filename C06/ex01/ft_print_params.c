
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	if (argc > 1)
	{
		while (argv[++i])
		{
			j = -1;
			while (argv[i][++j])
				write(1, &argv[i][j], 1);
			write(1, "\n", 1);
		}
	}
	return (0);
}
