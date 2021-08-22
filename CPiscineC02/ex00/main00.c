#include <stdio.h>

char 	*ft_strcpy(char *dest, char *src);

int main(void)
{
    char dest[42];
	char	*str = "Hola";

	ft_strcpy(dest, str);
	printf("%s", dest);
}