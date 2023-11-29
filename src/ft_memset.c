/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ykarimi <marvin@42.fr>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/20 11:36:36 by ykarimi       #+#    #+#                 */
/*   Updated: 2023/11/03 19:50:35 by ykarimi       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Implementation of memset - fill a byte string with a byte value.
** Standard C Library (libc, -lc)
** #include <string.h>
** writes len bytes of value c (converted to an unsigned char) to the string b.
** returns its first argument.
*/
#include "libft.h"

void	*ft_memset(void *buffer, int value, size_t len)
{
	unsigned char	*buffer_ptr;

	buffer_ptr = (unsigned char *) buffer;
	while (len > 0)
	{
		*buffer_ptr = (unsigned char)value;
		buffer_ptr++;
		len--;
	}
	return (buffer);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    char str1[20];
    char str2[20];

    // Using standard memset to fill the first 10 bytes with 'A'
    memset(str1, 'A', 10);
    printf("Standard memset (partial): %s\n", str1);

    // Using ft_memset to fill the first 10 bytes with 'B'
    ft_memset(str2, 'B', 10);
    printf("ft_memset (partial): %s\n", str2);

    // Using standard memset to fill the entire array with 'C'
    memset(str1, 'C', sizeof(str1));
    printf("Standard memset (full): %s\n", str1);

    // Using ft_memset to fill the entire array with 'D'
    ft_memset(str2, 'D', sizeof(str2));
    printf("ft_memset (full): %s\n", str2);

    return 0;
}
*/
