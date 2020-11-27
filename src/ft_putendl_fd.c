/**
Outputs the string s to the file descriptor fd followed by a ’\n’.
**/

#include "libft.h"

void    ft_putendl_fd(char const *s, int fd)
{
    ft_putstr_fd(s, fd);
    write(fd, "\n", 1);
}