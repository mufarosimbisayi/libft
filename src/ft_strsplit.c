/**
Allocates (with malloc(3)) and returns an array of “fresh” strings 
(all ending with ’\0’, including the array itself) ob- tained by 
spliting s using the character c as a delimiter. If the allocation 
fails the function returns NULL. Example : ft_strsplit("*hello*
fellow***students*", ’*’) re- turns the array ["hello", "fellow", "students"].
**/

#include "libft.h"

static int  ft_countwords(char const *s, char c)
{
    int     i;

    i = 0;
    while (s)
    {
        while (*s == c && s)
            s++;
        if (ft_isprint(*s) && *s != c)
            i++;
        while (s && ft_isprint(*s) && *s != c)
            s++;
    }
    return (i);
}

static int  ft_countletters(char const *s, char c)
{
    int     i;

    i = 0;
    while (ft_isprint(*s) && *s != c && s++)
        i++;
    return (i - 1);
}

char    **ft_strsplit(char const *s, char c)
{
    char    **ptr;
    char    **rtrn;
    char    *tmp;
    int     i;

    i = 0;
    tmp = NULL;
    ptr = (char **)ft_memalloc(sizeof(char **) * (ft_countwords(s, c) + 1));
    if (ptr)
        rtrn = ptr;
    while (s)
    {
        while (*s == c && s)
            s++;
        if (ft_isprint(*s) && *s != c)
        {
            i = ft_countletters(s, c);
            tmp = (char *)ft_memalloc(sizeof(char *) * (i + 1));
        }
        while (i >= 0 && tmp)
        {
            *tmp = *s;
            tmp++;
            s++;
            i--;
        }
        if (tmp)
        {
            *tmp = '\0';
            *ptr = tmp;
            ptr++;
        }
    }
    return (rtrn);
}