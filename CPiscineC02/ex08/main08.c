#include <stdio.h>

char	*ft_strlowcase(char *str);

int main(void)
{
    char str[] = "ALOS";

    ft_strlowcase(str);
    printf("%s", str);
}