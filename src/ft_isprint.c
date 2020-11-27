/**
tests for any printing character, including space (` ').  The value of the argu-
ment must be representable as an unsigned char or the value of EOF
**/

#include    "libft.h"

int     ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
        return (1);
    return (0);
}