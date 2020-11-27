/**
Adds the element new at the beginning of the list.
**/

#include "libft.h"

void    ft_lstadd(t_list **alst, t_list *new)
{
    if (alst == NULL || *alst == NULL || new == NULL)
        return;
    new->next = *alst;
    *alst = new;
}