void	swap(int a, int b, int *tab)
{
	int	temp;

	temp = tab[a];
	tab[a] = tab[b];
	tab[b] = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min[2];
	int	check;

	i = 0; // O(1)
	while (i < size - 1)
	{
		check = 0;
		j = i + 1;
		min[0] = __INT_MAX__;
		while (j < size)
		{
			if (tab[i] > tab[j] && tab[j] < min[0])
			{
				min[0] = tab[j];
				min[1] = j;
				check = 1;
			}
			++j;
		}
		if (check == 1)
			swap(i, min[1], tab);
		++i;
	}
}
