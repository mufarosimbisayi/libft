/**
**copy at most len characters from src into dst.  If src is less
**than len characters long, the remainder of dst is filled with `\0' characters.  Otherwise, dst is not
**terminated.
**/

#include "libft.h"

char *ft_strncpy(char * dest, const char * src, size_t len)
{
    size_t i;

    i = 0;
    while (src)
    {
        dest[i] = src[i];
        src++;
        i++;
    }
    while (i <= len)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}