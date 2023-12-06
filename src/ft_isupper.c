/*
** Implementation of isupper function - upper-case character test
** Standard C Library
** #include <ctype.h>
** The isupper() function returns zero if the character tests false and returns non-
** zero if the character tests true
*/

#include "libft.h"

int ft_isupper(int c)
{
    return (c >= 'A' && c <= 'Z');
}