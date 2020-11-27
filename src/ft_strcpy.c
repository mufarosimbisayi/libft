/**
function copy the string src to dst (including the terminating `\0' charac-ter.)
**/

#include "libft.h"

char    *ft_strcpy(char * dest, const char * src)
{
    int i;

    i = 0;
    while (src)
    {
        dest[i] = src[i];
        src++;
        i++;
    }
    dest[i] = src[i];
    return (dest);
}