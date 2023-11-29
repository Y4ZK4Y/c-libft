/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ykarimi <marvin@42.fr>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/20 11:11:04 by ykarimi       #+#    #+#                 */
/*   Updated: 2023/11/03 19:49:39 by ykarimi       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Implementation of strlcpy function - size-bounded string copying
** library "libbsd"
** #include <bsd/string.h>
** The strlcpy() first appeared in OpenBSD 2.4, and FreeBSD 3.3.
** It was designed to be safer, more consistent, and less error prone 
** replacement for the easily misused function strncpy(3).
** strlcpy() copies up to dstsize - 1 characters from the string src to dst,
** NUL-terminating the result if dstsize is not 0. Returns the length of src.
*/
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	max_dst_len;
	unsigned int	i;

	i = 0;
	max_dst_len = (unsigned int)(dstsize - 1);
	if (!dst || !src)
		return (0);
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < max_dst_len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
#include <stdio.h>
#include <bsd/string.h>

int main() {
    char dest1[20] = "Hello, ";
    const char *source1 = "world";
    size_t size1 = 20;

    char dest2[20] = "Hello, ";
    size_t result1 = strlcpy(dest1, source1, size1);
    printf("strlcpy Result: %zu\n", result1);
    printf("Copied String: %s\n", dest1);

    size_t result2 = ft_strlcpy(dest2, source1, size1);
    printf("ft_strlcpy Result: %zu\n", result2);
    printf("Copied String: %s\n", dest2);

    if (result1 == result2 && strcmp(dest1, dest2) == 0) {
        printf("Test Case 1: Passed\n");
    } else {
        printf("Test Case 1: Failed\n");
    }

    char dest3[5] = "Hello";
    const char *source2 = "world";
    size_t size2 = 5;

    char dest4[5] = "Hello";
    size_t result3 = strlcpy(dest3, source2, size2);
    printf("strlcpy Result: %zu\n", result3);
    printf("Copied String: %s\n", dest3);

    size_t result4 = ft_strlcpy(dest4, source2, size2);
    printf("ft_strlcpy Result: %zu\n", result4);
    printf("Copied String: %s\n", dest4);

    if (result3 == result4 && strcmp(dest3, dest4) == 0) {
        printf("Test Case 2: Passed\n");
    } else {
        printf("Test Case 2: Failed\n");
    }

    return 0;
}
*/
