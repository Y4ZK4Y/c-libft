/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ykarimi <marvin@42.fr>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/20 11:41:58 by ykarimi       #+#    #+#                 */
/*   Updated: 2023/11/03 19:50:53 by ykarimi       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Implementation of memcmp - compare memory areas
** Standard C Library (libc, -lc)
** #include <string.h>
** compares the first n bytes (each interpreted as unsigned  char) of the 
** memory areas s1 and s2.
** returns  an  integer  less  than,  equal  to,  or greater than zero if 
** the first n bytes of s1 is found, respectively, to be less than, to match, 
** or be greater than the first n bytes of s2.
** For a nonzero return value, the sign is determined by the sign  of  the 
** difference  between  the  first  pair of bytes (interpreted as unsigned char)
** that differ in s1 and s2.
** If n is zero, the return value is zero.
*/
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1p;
	unsigned char	*s2p;
	size_t			i;

	if (!s1 && !s2)
		return (0);
	s1p = (unsigned char *)s1;
	s2p = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1p[i] != s2p[i])
			return (s1p[i] - s2p[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    // Test cases
    const unsigned char test1[] = "Hello";
    const unsigned char test2[] = "Hello";
    const unsigned char test3[] = "Helloworld";
    const unsigned char test4[] = "Hell";
    const unsigned char test5[] = "Helli";

    // Testing custom ft_memcmp
    printf("ft_memcmp Results:\n");
    printf("Test 1: %d\n", ft_memcmp(test1, test2, 5));
    printf("Test 2: %d\n", ft_memcmp(test1, test3, 5));
    printf("Test 3: %d\n", ft_memcmp(test1, test4, 4));
    printf("Test 4: %d\n", ft_memcmp(test4, test5, 4));

    // Testing standard memcmp
    printf("\nStandard memcmp Results:\n");
    printf("Test 1: %d\n", memcmp(test1, test2, 5));
    printf("Test 2: %d\n", memcmp(test1, test3, 5));
    printf("Test 3: %d\n", memcmp(test1, test4, 4));
    printf("Test 4: %d\n", memcmp(test4, test5, 4));

    return 0;
}
*/
