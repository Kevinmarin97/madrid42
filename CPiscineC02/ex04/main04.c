#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int main (void)
{
    char *str;

    str = "abc55";
    printf("%d", ft_str_is_lowercase(str));
}