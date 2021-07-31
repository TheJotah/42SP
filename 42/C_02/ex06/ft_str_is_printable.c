int	ft_str_is_printable(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (32 > str[x] || str[x] > 126)
		{
			return (0);
		}
		x++;
	}
	return (1);
}
