/**
Outputs the integer n to the standard output.
**/

#include "libft.h"

void    ft_putnbr(int n)
{
    if (n == -2147483648)
    {
		ft_putstr("-2147483648");
        return;
    }
    if (n < 0)
        n *= -1;
    if (n >= 0 && n < 10)
        ft_putchar((n % 10) + '0');
    if (n >= 10)
        ft_putnbr(n / 10);
}