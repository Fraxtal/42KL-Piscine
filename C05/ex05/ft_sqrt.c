
int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i <= nb && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/*
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char **argv)
{
	int ans;

	ans = atoi(argv[1]);
	printf("%d\n", ft_sqrt(ans));
}
*/