
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	temp;

	i = 1;
	temp = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		nb = nb * temp;
		i++;
	}
	return (nb);
}

/*
#include <stdio.h>
int	main()
{
	int nb;
	int power;

	printf("Enter a number: ");
	scanf("%d", &nb);
	printf("Enter a power: ");
	scanf("%d", &power);
	printf("%d\n", ft_iterative_power(nb, power));
	return (0);
}
*/