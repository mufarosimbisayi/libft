/*
**appends string src to the end of dst.  It will append at most dstsize - strlen(dst) - 1 char-
**acters.
**/

#include "libft.h"

size_t  ft_strlcat(char *dest, const char *src, size_t destsize)
{
    int i;

    i = (int)(destsize - ft_strlen((const char*)dest));
    if (i >= 0)
    {
        dest = ft_strncat(dest, src, i);
    }
    return (ft_strlen((const char*)dest) + ft_strlen(src));
}