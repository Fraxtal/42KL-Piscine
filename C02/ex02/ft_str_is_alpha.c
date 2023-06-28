int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (!str[i])
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 122)
		{
			return (0);
		}
		if ((str[i] >= 91 && str[i] <= 96))
		{
			return (0);
		}
		++i;
	}
	return (1);
}
