unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	x;

	x = 0;
	if (0 < size)
	{
		while (src[x] != '\0' && x < (size - 1))
		{
			dest[x] = src[x];
			x++;
		}
		dest[x] = '\0';
	}
	while (src[x] != '\0')
	{
		x++;
	}
	return (x);
}
