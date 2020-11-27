/**
tests for any character on the alphabet.
**/

#include    "libft.h"

int     ft_isalpha(int c)
{
    if ((c >= 'A' && c <= 'B') || (c >= 'a' && c <= 'b'))
        return (1);
    return (0);
}