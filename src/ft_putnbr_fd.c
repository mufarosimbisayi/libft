/**
Outputs the integer n to the file fd.
**/

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
    {
		ft_putstr_fd("-2147483648", fd);
        return;
    }
    if (n < 0)
        n *= -1;
    if (n >= 0 && n < 10)
        ft_putchar_fd((n % 10) + '0', fd);
    if (n >= 10)
        ft_putnbr(n / 10);
}