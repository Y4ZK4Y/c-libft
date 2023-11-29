/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ykarimi <marvin@42.fr>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/19 16:10:43 by ykarimi       #+#    #+#                 */
/*   Updated: 2023/11/03 19:54:22 by ykarimi       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Implementation of isalnum - alphanumeric character test.
** Standard C Library (libc, -lc)
** #include <ctype.h>
** The isalnum() function tests for any character for which isalpha(3) or
** isdigit(3) is true. The value of the
** argument must be representable as an unsigned char or the value of EOF.
*/
#include "libft.h"

int	ft_isalnum(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || \
			(c >= '0' && c <= '9'));
}
/*
#include <stdio.h>
#include <ctype.h>

int main() {
    const char *test_string = "Hello123 World! 456";
    printf("Original String: %s\n", test_string);

    printf("Using standard isalnum:\n");
    for (int i = 0; test_string[i] != '\0'; i++) {
        if (isalnum(test_string[i])) {
            putchar('1');
        } else {
            putchar('0');
        }
    }
    putchar('\n');

    printf("Using ft_isalnum:\n");
    for (int i = 0; test_string[i] != '\0'; i++) {
        if (ft_isalnum(test_string[i])) {
            putchar('1');
        } else {
            putchar('0');
        }
    }
    putchar('\n');

    return 0;
}
*/
