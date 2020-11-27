/**
converts a upper-case letter to the corresponding lower-case letter.
**/

#include    "libft.h"

int     ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + 32);
    return (c);
}