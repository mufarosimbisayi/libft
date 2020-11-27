/*
function copies len bytes from string src to string dst.  The two strings may overlap;
** the copy is always done in a non-destructive manner.
*/

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t len)
{
    char *destt;
    char *srct;
    size_t i; 

    i = 0;
    destt = (char *)dest;
    srct = (char *)src;
    if (srct < destt)
        while (len--)
        {
            destt[len] = srct[len];
        }
    else
        while (i < len)
        {
            destt[i] = srct[i];
            i++;
        }
    return (dest);
}