char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	index;

	i = 0;
	index = 0;
	while (dest[i])
	{
		i++;
	}
	while (*src && index < nb)
	{
		dest[i++] = *src;
		src++;
		index++;
	}
	dest[i] = '\0';
	return (dest);
}
