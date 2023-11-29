/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ykarimi <marvin@42.fr>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/20 11:39:58 by ykarimi       #+#    #+#                 */
/*   Updated: 2023/11/03 19:50:48 by ykarimi       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Implementation of memcpy - copy memory area
** Standard C Library (libc, -lc)
** #include <string.h>
** copies n bytes from memory area src to memory area dst.  If dst and src 
** overlap, behavior is undefined.  Applications in which dst and src might 
** overlap should use memmove(3) instead.
** returns the original value of dst.
*/
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dst_ptr;
	const unsigned char	*src_ptr;

	dst_ptr = (unsigned char *) dst;
	src_ptr = (unsigned char *) src;
	if (dst == src || !n)
		return (dst);
	while (n--)
		*dst_ptr++ = *src_ptr++;
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dst, const void *src, size_t n);

int main() {
	// Test cases
	char src1[] = "Hello, World!";
	char dest1[20];
	char src2[] = "Testing";
	char dest2[10];
	char src3[] = "12345";
	char dest3[10];
	char src4[] = "";
	char dest4[10];

	// Test 1: Copy a string to another
	printf("Test 1:\n");
	ft_memcpy(dest1, src1, strlen(src1) + 1);
	printf("ft_memcpy result: %s\n", dest1);
	printf("Comparison: %s\n", strcmp(dest1, src1) == 0 ? "PASSED" : "FAILED");

	// Test 2: Copy a shorter string to another
	printf("Test 2:\n");
	ft_memcpy(dest2, src2, strlen(src2) + 1);
	printf("ft_memcpy result: %s\n", dest2);
	printf("Comparison: %s\n", strcmp(dest2, src2) == 0 ? "PASSED" : "FAILED");

	// Test 3: Copy a string to another with a smaller buffer
	printf("Test 3:\n");
	ft_memcpy(dest3, src3, strlen(src3) + 1);
	printf("ft_memcpy result: %s\n", dest3);
	printf("Comparison: %s\n", strcmp(dest3, src3) == 0 ? "PASSED" : "FAILED");

	// Test 4: Copy an empty string to another
	printf("Test 4:\n");
	ft_memcpy(dest4, src4, strlen(src4) + 1);
	printf("ft_memcpy result: %s\n", dest4);
	printf("Comparison: %s\n", strcmp(dest4, src4) == 0 ? "PASSED" : "FAILED");

	return 0;
}
*/
