/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ykarimi <marvin@42.fr>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/19 16:06:18 by ykarimi       #+#    #+#                 */
/*   Updated: 2023/11/03 19:52:15 by ykarimi       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Implementation of bzero - write zeroes to a byte string.
** Standard C Library (libc, -lc)
** #include <ctype.h>
** The bzero() function writes n zeroed bytes to the string s.  If n is zero,
** bzero() does nothing.
*/
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*s_ptr;

	s_ptr = (unsigned char *) s;
	while (n--)
		*s_ptr++ = 0;
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    char original[] = "This is the original string.";
    char custom[] = "This is the custom string.";

    // Testing with a sample string
    printf("Original String: %s\n", original);
    printf("Custom String: %s\n", custom);

    // Using original bzero and ft_bzero
    bzero(original, sizeof(original));
    ft_bzero(custom, sizeof(custom));

    // Verify the results
    printf("After original bzero:\n");
    printf("Original String: %s\n", original);
    printf("After ft_bzero:\n");
    printf("Custom String: %s\n", custom);

    // Edge case: Empty string
    char empty_string[] = "";
    printf("Empty String before ft_bzero: '%s'\n", empty_string);
    ft_bzero(empty_string, 0);  // Should do nothing
    printf("Empty String after ft_bzero: '%s'\n", empty_string);

    return 0;
}
*/
