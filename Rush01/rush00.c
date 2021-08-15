void	ft_putchar(char c);

void	ft_funt1(int x)
{
	int	count;

	count = 1;
	while (x >= count)
	{
		if (count == 1)
			ft_putchar('o');
		else if ((count != 1) && (count != x))
			ft_putchar('-');
		else
			ft_putchar('o');
		count++;
	}
	ft_putchar('\n');
}

void	ft_funt2(int y, int alt)
{
	int	count;
	int	count2;

	count2 = 1;
	while (count2 < alt - 1)
	{
		count = 1;
		while (y >= count)
		{
			if (count == 1)
				ft_putchar('|');
			else if ((count != 1) && (count != y))
				ft_putchar(' ');
			else
				ft_putchar('|');
			count++;
		}
		ft_putchar('\n');
		count2++;
	}
}

void	ft_funt3(int x)
{
	int	count;

	count = 1;
	while (x >= count)
	{
		if ((count == 1) || (count == x))
			ft_putchar('o');
		else if ((count != 1) && (count != x))
			ft_putchar('-');
		count++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		if (y == 1)
			ft_funt1(x);
		else
		{
			ft_funt1(x);
			ft_funt2(x, y);
			ft_funt3(x);
		}
	}
}
