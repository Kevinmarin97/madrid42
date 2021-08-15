#include <unistd.h>

void ft_putchar(char c)
{
    int a;
    int b;

        a = (c / 10) + 48;
        b = (c % 10) + 48;
        write(1, &a, 1);
        write(1, &b, 1);
        
}

void ft_print_combn(int n)
{
    if (n == 2)
    {
        int a;
        int b;

        a = 0;
        b = 0;
        while (a <= 98)
        {
            while (b <= 9)
            {
                ft_putchar(a);
                
                write(1, ", ", 2);
                b++;
            }
            a++;
            b = a +1;
        }   
        
    }
}

int main(void)
{
    ft_print_combn(2);
    return(0);
}

