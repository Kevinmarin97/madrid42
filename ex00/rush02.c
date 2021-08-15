void	ft_putchar(char c);

void	ft_funt1(int holi)
{
	int	count;

	count = 1;
	while (holi >= count)
	{
		if (count == 1)
			ft_putchar('A');
		else if (count > 1 && count < holi)
			ft_putchar('B');
		else
		{
			ft_putchar('A');
			ft_putchar('\n');
		}
		count++;
	}
}

void	ft_funt2(int holi, int holi2)
{
	int	count;
	int	count2;

	count2 = 1;
	while (count2 < holi2)
	{
		count = 1;
		while (holi >= count)
		{
			if (count == 1)
				ft_putchar('B');
			else if (count > 1 && count < holi)
				ft_putchar(' ');
			else
				ft_putchar('B');
			count++;
		}
		count2++;
		ft_putchar('\n');
	}
}

void	ft_funt3(int holi)
{
	int	count;

	count = 1;
	while (holi >= count)
	{
		if (count == 1)
			ft_putchar('C');
		else if (count > 1 && count < holi)
			ft_putchar('B');
		else
		{
			ft_putchar('C');
			ft_putchar('\n');
		}
		count++;
	}
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
