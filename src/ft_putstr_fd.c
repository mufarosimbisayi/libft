/**
Outputs the string s to the file descriptor fd.
**/

#include "libft.h"

void    ft_putstr_fd(const char *s, int fd)
{
    while (s)
    {
        ft_putchar_fd(*s, fd);
        s++;
    }
}