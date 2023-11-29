/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ykarimi <marvin@42.fr>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/20 10:48:31 by ykarimi       #+#    #+#                 */
/*   Updated: 2023/11/03 19:48:56 by ykarimi       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Implementation of tolower - upper case to lower case letter conversion.
** Standard C Library (libc, -lc)
** #include <ctype.h>
** If the argument is an upper-case letter, the tolower() function returns 
** the corresponding lower-case letter if there is one; otherwise, the argument
** is returned unchanged.
*/
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>
int main() {
    const char *test_string = "Hello World";
    printf("Original String: %s\n", test_string);

    printf("Using standard tolower:\n");
    for (int i = 0; test_string[i] != '\0'; i++) {
        putchar(tolower(test_string[i]));
    }
    putchar('\n');

    printf("Using ft_tolower:\n");
    for (int i = 0; test_string[i] != '\0'; i++) {
        putchar(ft_tolower(test_string[i]));
    }
    putchar('\n');

    return 0;
}
*/
