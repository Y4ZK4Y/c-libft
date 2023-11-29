/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ykarimi <marvin@42.fr>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/19 16:12:15 by ykarimi       #+#    #+#                 */
/*   Updated: 2023/11/03 19:48:17 by ykarimi       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Implementation of isalpha - alphabetic character test.
** Standard C Library (libc, -lc)
** #include <ctype.h>
** The isalpha() function returns zero if the character tests false and 
** returns non-zero if the character tests true.
*/
#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
/*
#include <stdio.h>
#include <ctype.h>
int main() {
    const char *test_string = "Hello World! 123";
    printf("Original String: %s\n", test_string);

    printf("Using standard isalpha:\n");
    for (int i = 0; test_string[i] != '\0'; i++) {
        if (isalpha(test_string[i])) {
            putchar('1');
        } else {
            putchar('0');
        }
    }
    putchar('\n');

    printf("Using ft_isalpha:\n");
    for (int i = 0; test_string[i] != '\0'; i++) {
        if (ft_isalpha(test_string[i])) {
            putchar('1');
        } else {
            putchar('0');
        }
    }
    putchar('\n');

    return 0;
}
*/
