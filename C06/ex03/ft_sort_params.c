
#include <stdbool.h>
#include <unistd.h>
#include <stdio.h>
void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}


int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

void	sort(char **str, int size)
{
	int		i;
	bool	swap;

	while (true)
	{
		swap = false;
		i = 1;
		while (i < size)
		{
			if (ft_strcmp(str[i], str[i + 1]) > 0)
			{
				ft_swap(&str[i], &str[i + 1]);
				swap = true;
			}
			i++;
		}
		if (swap == false)
			break ;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc > 2)
		sort(argv, argc - 1);
	i = 0;
	while (++i < argc)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
	}
}
