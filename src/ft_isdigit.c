/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ykarimi <marvin@42.fr>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/19 16:14:16 by ykarimi       #+#    #+#                 */
/*   Updated: 2023/11/03 19:51:52 by ykarimi       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Implementing isdigit - decimal-digit character test.
** Standard C Library (libc, -lc)
** #include <ctype.h>
** The isdigit() function tests for a decimal digit character.  Regardless of 
** locale, this includes the following characters only:
** 
**  ``0''``1''``2''``3''``4''
**  ``5''``6''``7''``8''``9''
** 
** return zero if the character tests false and return non-zero if the 
** character tests true.
*/
#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*
#include <stdio.h>
#include <ctype.h>
int main() {
    const char *test_string = "12345 ABC";
    printf("Original String: %s\n", test_string);

    printf("Using standard isdigit:\n");
    for (int i = 0; test_string[i] != '\0'; i++) {
        if (isdigit(test_string[i])) {
            putchar('1');
        } else {
            putchar('0');
        }
    }
    putchar('\n');

    printf("Using ft_isdigit:\n");
    for (int i = 0; test_string[i] != '\0'; i++) {
        if (ft_isdigit(test_string[i])) {
            putchar('1');
        } else {
            putchar('0');
        }
    }
    putchar('\n');

    return 0;
}
*/