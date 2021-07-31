void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	l;
	int	c;

	l = 1;
	c = 1;
	while (l <= y)
	{
		while (c <= x)
		{
			if (l == 1 && c == 1)
				ft_putchar('A');
			else if ((l == 1 && c == x) || (l == y && c == 1))
				ft_putchar('C');
			else if (l == y && c == x)
				ft_putchar('A');
			else if (l == 1 || l == y || c == 1 || c == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		c = 1;
		l++;
	}
}
