int	ft_str_is_alpha(char *str)
{
	unsigned int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] < 'A' || (str[x] > 'Z' && str[x] < 'a') || str[x] > 'z')
		{
			return (0);
		}
		x++;
	}
	return (1);
}
