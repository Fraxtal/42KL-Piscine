
#include <stdlib.h>

// sizeof(int) = 4 bytes

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
		return (NULL);
	i = 0;
	arr = (int *)malloc(4 * (max - min));
	while (i < (max - min))
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
