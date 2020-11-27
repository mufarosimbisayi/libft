/** Writes len bytes of value c (converted to an unsigned char) to the string b. **/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
    unsigned char *tb;

    tb = (unsigned char*)b;
    tb[len] = '\0';
    while (len--)
    {
        tb[len] = (unsigned char)c;
    }
    return (b);
}