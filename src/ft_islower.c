/*
** Implementation of islower function - lower-case character test
** Standard C Library
** #include <ctype.h>
** The islower() function returns zero if the character tests false and returns non-
** zero if the character tests true
*/

#include "libft.h"

int ft_islower(int c)
{
    return (c >= 'a' && c <= 'z');
}