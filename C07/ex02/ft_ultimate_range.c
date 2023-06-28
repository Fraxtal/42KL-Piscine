
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(4 * (max - min));
	if (*range == NULL)
		return (-1);
	while (i < (max - min))
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max - min);
}

/*
#include <stdio.h>
int	main(void)
{
    int    min;
    int    max;
    int    *tab;
    int    size;
    int    i;

    
    i = 0;
    min = 5;
    max = 10;
    size = ft_ultimate_range(&tab, min, max);
    while(i < size)
    {
        printf("%d, ", tab[i]);
        i++;
    }
}
*/