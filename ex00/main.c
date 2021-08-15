void	rush(int x, int y);

int	myAtoi(char *str)
{
	int	res;
	int	count;

	res = 0;
	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= '0' && str[count] <= '9')
		{
			res = res * 10 + str[count] - '0';
			count++;
		}
		else
			break ;
	}
	if (str[count] == '\0')
		return (res);
	else
		return (0);
}

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	if (argc == 3)
	{
		a = myAtoi(argv[1]);
		b = myAtoi(argv[2]);
		rush(a, b);
		return (0);
	}
}
