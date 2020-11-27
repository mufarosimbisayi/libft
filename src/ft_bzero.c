/** function writes n zeroed bytes to the string s.  If n is zero, bzero() does nothing **/

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    unsigned char *ts;

    ts = (unsigned char*)s;
    ts[n] = '\0';
    while (n--)
    {
        ts[n] = 0;
    }
}