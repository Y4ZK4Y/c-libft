/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ykarimi <marvin@42.fr>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/19 16:13:07 by ykarimi       #+#    #+#                 */
/*   Updated: 2023/11/03 19:52:03 by ykarimi       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Implementation of isascii - test for ASCII character.
** Standard C Library (libc, -lc)
** #include <ctype.h>
** The isascii() function tests for an ASCII character, which is any character
** between 0 and octal 0177 inclusive.
*/
#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
#include <stdio.h>
#include <ctype.h>
int main() {
    const char *test_string = "Hello World!";
    printf("Original String: %s\n", test_string);

    printf("Using standard isascii:\n");
    for (int i = 0; test_string[i] != '\0'; i++) {
        if (isascii(test_string[i])) {
            putchar('1');
        } else {
            putchar('0');
        }
    }
    putchar('\n');

    printf("Using ft_isascii:\n");
    for (int i = 0; test_string[i] != '\0'; i++) {
        if (ft_isascii(test_string[i])) {
            putchar('1');
        } else {
            putchar('0');
        }
    }
    putchar('\n');

    return 0;
}
*/
