
#include <unistd.h>

void	recursion(char **str, int i)
{
	int	j;

	j = -1;
	if (!(str[i]))
		return ;
	recursion(str, i + 1);
	while (str[i][++j])
		write(1, &str[i][j], 1);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		recursion(argv, 1);
	return (0);
}
