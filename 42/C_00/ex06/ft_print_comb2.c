#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		group1;
	int		group2;

	group1 = 0;
	while (group1 <= 98)
	{
		group2 = group1 + 1;
		while (group2 <= 99)
		{
			ft_putchar (48 + (group1 / 10));
			ft_putchar (48 + (group1 % 10));
			ft_putchar (' ');
			ft_putchar (48 + (group2 / 10));
			ft_putchar (48 + (group2 % 10));
			if (!(group1 == 98 && group2 == 99))
				write(1, ", ", 2);
			group2++;
		}
		group1++;
	}
}
