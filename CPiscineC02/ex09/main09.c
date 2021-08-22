#include <stdio.h>

char	*ft_strcapitalize(char	*str);

int main(void)
{
    char str[] = "hola que";
    ft_strcapitalize(str);
    printf("%s\n", str);
}