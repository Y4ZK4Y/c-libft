/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ykarimi <marvin@42.fr>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/20 11:12:41 by ykarimi       #+#    #+#                 */
/*   Updated: 2023/11/03 19:49:45 by ykarimi       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Implementation of strlcat function - Size-bounded string concatenation.
** library "libbsd"
** #include <bsd/string.h>
** strlcat() takes the full size of the buffer (not just the length) and 
** guarantee to NUL-terminate the result (as long as size is larger than 0 or,
** in the case of strlcat(), as long as there is at least one byte free in dst)
** Note that a byte for the NUL should be included in size.
** return value is the initial length of dst plus the length of src.
** If the return value is >= dstsize, the output string has been truncated. 
** It is the caller's responsibility to handle this.
*/
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*d;
	char	*s;
	size_t	len;
	size_t	d_len;

	d = (char *)ft_memchr(dst, '\0', dstsize);
	if (!d)
		return (dstsize + ft_strlen(src));
	s = (char *)src;
	d = (char *)dst;
	d_len = ft_strlen(dst);
	len = d_len + ft_strlen(s);
	d += d_len;
	while (d_len++ < dstsize - 1 && *s)
		*d++ = *s++;
	*d = '\0';
	return (len);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int main() {
    // Test Case 1: Basic Usage
    char dest1[20] = "Hello, ";
    const char *source1 = "world";
    size_t size1 = 20;

    size_t result1 = strlcat(dest1, source1, size1);
    printf("strlcat Result: %zu\n", result1);
    printf("Concatenated String: %s\n", dest1);

    char dest2[20] = "Hello, ";
    size_t result2 = ft_strlcat(dest2, source1, size1);
    printf("ft_strlcat Result: %zu\n", result2);
    printf("Concatenated String: %s\n", dest2);

    if (result1 == result2 && strcmp(dest1, dest2) == 0) {
        printf("Test Case 1: Passed\n");
    } else {
        printf("Test Case 1: Failed\n");
    }

    // Test Case 2: Destination buffer too small
    char dest3[5] = "Hello";
    const char *source2 = "world";
    size_t size2 = 5;

    size_t result3 = strlcat(dest3, source2, size2);
    printf("strlcat Result: %zu\n", result3);
    printf("Concatenated String: %s\n", dest3);

    char dest4[5] = "Hello";
    size_t result4 = ft_strlcat(dest4, source2, size2);
    printf("ft_strlcat Result: %zu\n", result4);
    printf("Concatenated String: %s\n", dest4);

    if (result3 == result4 && strcmp(dest3, dest4) == 0) {
        printf("Test Case 2: Passed\n");
    } else {
        printf("Test Case 2: Failed\n");
    }

    return 0;
}
*/
