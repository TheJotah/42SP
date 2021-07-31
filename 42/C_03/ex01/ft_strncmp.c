int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				i;
	unsigned int	index;

	index = 0;
	i = 0;
	while (index < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
		index++;
	}
	return (0);
}
