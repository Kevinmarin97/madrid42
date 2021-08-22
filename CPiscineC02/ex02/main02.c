#include <stdio.h>

int	ft_str_is_alpha(char *str);

int main (void)
{
    int i;
    char    *str;

   str = "Hola23";

    i = ft_str_is_alpha(str);
    printf("%d", i);
}