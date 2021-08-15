#include <unistd.h>

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	char	y;
	char	x;
	char	z;

	y = '0';
	 while (y <= '9')
	{
		x = y + 1;
		 while (x <= '9')
		{
			z = x + 1;
			while (z <= '9')
			{
				write (1, &y, 1);
				write (1, &x, 1);
				write (1, &z, 1);
				if (!(y == '7' && x == '8' && z == '9'))
					write (1, ", ", 2);
				z++;
			}
			x++;
		}
		y++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	ft_print_comb();
	 return (0);
}
