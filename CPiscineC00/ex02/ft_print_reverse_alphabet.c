#include <unistd.h>

void	ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	char	i;

	i = 'z';
	while (i <= 'z' && i >= 'a')
	{
		write (1, &i, 1);
		i--;
	}
}
