/**
Outputs the char c to the file descriptor fd.
**/

#include "libft.h"

void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}