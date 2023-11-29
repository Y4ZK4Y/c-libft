/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ykarimi <marvin@42.fr>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/20 11:38:12 by ykarimi       #+#    #+#                 */
/*   Updated: 2023/11/03 19:50:39 by ykarimi       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Implementation of memmove - copy memory area
** Standard C Library (libc, -lc)
** #include <string.h>
** The  memmove()  function  copies n bytes from memory area src to memory
** area dest.  The memory areas may overlap: copying takes place as though
** the  bytes in src are first copied into a temporary array that does not
** overlap src or dest, and the bytes are then copied from  the  temporary
** array to dest.
** The memmove() function returns a pointer to dest.
*/
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dstp;
	const char	*srcp;
	size_t		i;

	if (!dst && !src)
		return (NULL);
	dstp = dst;
	srcp = src;
	if (dstp > srcp)
	{
		i = len;
		while (i > 0)
		{
			dstp[i - 1] = srcp[i - 1];
			i--;
		}
	}
	else if (dstp < srcp)
		ft_memcpy(dstp, srcp, len);
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    // Test case 1: Overlapping move (dst > src)
    char str1[] = "Hello, World!";
    printf("Original string: %s\n", str1);
    ft_memmove(str1 + 7, str1, 5);
    printf("ft_memmove result: %s\n", str1);

    char str2[] = "Hello, World!";
    memmove(str2 + 7, str2, 5);
    printf("memmove result: %s\n", str2);
    printf("\n");

    // Test case 2: Overlapping move (dst < src)
    char str3[] = "Hello, World!";
    printf("Original string: %s\n", str3);
    ft_memmove(str3, str3 + 7, 5);
    printf("ft_memmove result: %s\n", str3);

    char str4[] = "Hello, World!";
    memmove(str4, str4 + 7, 5);
    printf("memmove result: %s\n", str4);
    printf("\n");

    // Test case 3: Non-overlapping move
    char str5[] = "Hello, World!";
    printf("Original string: %s\n", str5);
    ft_memmove(str5 + 7, str5, 3);
    printf("ft_memmove result: %s\n", str5);

    char str6[] = "Hello, World!";
    memmove(str6 + 7, str6, 3);
    printf("memmove result: %s\n", str6);
    printf("\n");

    // Test case 4: Move to the same location (no effect)
    char str7[] = "Hello, World!";
    printf("Original string: %s\n", str7);
    ft_memmove(str7 + 7, str7 + 7, 5);
    printf("ft_memmove result: %s\n", str7);

    char str8[] = "Hello, World!";
    memmove(str8 + 7, str8 + 7, 5);
    printf("memmove result: %s\n", str8);

    return 0;
}
*/
