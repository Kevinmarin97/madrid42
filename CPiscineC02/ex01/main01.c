#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char src[] = "Hola mundo.";
	char dest[42];
	unsigned int n;

	n = 3;

	ft_strncpy(dest, src, n);
	printf("%s", dest);
}
