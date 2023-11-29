/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ykarimi <marvin@42.fr>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/20 11:02:36 by ykarimi       #+#    #+#                 */
/*   Updated: 2023/11/03 19:49:24 by ykarimi       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Implementation of strncmp - Compare strings.
** Standard C Library (libc, -lc)
** #include <string.h>
** compares not more than n characters.  Because strncmp() is designed for 
** comparing strings rather than binary data, characters that appear after a
** ‘\0’ character are not compared.
** returns an integer greater than, equal to, or less than 0, according as
** the string s1 is greater than, equal to, or less than the string s2.  
** The comparison is done using unsigned
** characters, so that ‘\200’ is greater than ‘\0’.
*/
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n && *s1 && (*s1 == *s2))
	{
		++s1;
		++s2;
		--n;
	}
	if (n == 0 || (*s1 == '\0' && *s2 == '\0'))
		return (0);
	else
		return (*(unsigned const char *)s1 - *(unsigned const char *)s2);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    const char *test_cases[] = {
        "apple",
        "apples",
        "apple",
        "banana",
        "apple",
        "orange",
        "hello",
        "hello",
        "world",
        "world",
        "testing",
        "test",
        "12345",
        "12345",
        "abc",
        "xyz",
        NULL,  // Test with a NULL pointer
        "xyz",
        NULL,  // Test with both NULL pointers
        NULL,
        NULL
    };

    size_t n_values[] = {
        5,
        5,
        6,
        6,
        0,
        6,
        5,
        5,
        6,
        5,
        3,
        3,
        5,
        4,
        2,
        2,
        5,
        5,
        0,
        0
    };

    // Calculate the number of test cases
    int num_test_cases = sizeof(test_cases) / sizeof(test_cases[0]);

    for (int i = 0; i < num_test_cases; i += 2) {
        const char *s1 = test_cases[i];
        const char *s2 = test_cases[i + 1];
        size_t n = n_values[i / 2];

        printf("Test Case %d:\n", i / 2 + 1);
        printf("s1: \"%s\"\n", s1);
        printf("s2: \"%s\"\n", s2);
        printf("n: %zu\n", n);

        int result = ft_strncmp(s1, s2, n);
        int original_result = strncmp(s1, s2, n);

        printf("ft_strncmp Result: %d\n", result);
        printf("Original strncmp Result: %d\n", original_result);
        printf("Comparison: %s\n", (result == original_result) \
		 ? "PASSED" : "FAILED");
        printf("\n");
    }

    return 0;
}
*/
