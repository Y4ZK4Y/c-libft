/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ykarimi <marvin@42.fr>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/20 10:47:00 by ykarimi       #+#    #+#                 */
/*   Updated: 2023/11/03 19:48:46 by ykarimi       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Implementation of toupper - lower case to upper case letter conversion.
** Standard C Library (libc, -lc)
** #include <ctype.h>
** If the argument is a lower-case letter, the toupper() function returns the 
** corresponding upper-case letter if there is one; otherwise, the argument
** is returned unchanged.
*/
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>

int main() {
    const char *test_string = "Hello World";
    printf("Original String: %s\n", test_string);

    printf("Using standard toupper:\n");
    for (int i = 0; test_string[i] != '\0'; i++) {
        putchar(toupper(test_string[i]));
    }
    putchar('\n');

    printf("Using ft_toupper:\n");
    for (int i = 0; test_string[i] != '\0'; i++) {
        putchar(ft_toupper(test_string[i]));
    }
    putchar('\n');

    return 0;
}
*/
