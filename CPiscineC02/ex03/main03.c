#include <stdio.h>

int	ft_str_is_numeric(char *str);

int     main(void)
{
    
    char *str;

    str = "555";
    printf("%d\n", ft_str_is_numeric(str));
}