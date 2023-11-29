/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ykarimi <marvin@42.fr>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/20 11:18:54 by ykarimi       #+#    #+#                 */
/*   Updated: 2023/11/03 19:50:00 by ykarimi       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Implementation of strdup - save a copy of a string
** #include <string.h>
** Standard C Library
** duplicate a string from one memory location to anotehr memory location
** The strdup() function allocates sufficient memory for a copy of the string
** s1, does the copy, and returns a pointer to it.  The pointer may subsequently
** be used as an argument to the function free(3).
** If insufficient memory is available, NULL is returned and errno is set to
**  ENOMEM.
*/
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*str;
	int		i;

	len = ft_strlen(s1);
	i = 0;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (str)
		str[len] = '\0';
	if (!str || !s1)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	return (str);
}
/*

#include <stdio.h>
#include <string.h>


int main() {
    // Test Case 1: Duplicate a string
    const char *original = "Hello, world!";
    char *dup1 = strdup(original);
    char *dup2 = ft_strdup(original);

    if (dup1 == NULL || dup2 == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Compare the duplicated strings
    if (strcmp(dup1, dup2) == 0) {
        printf("Test Case 1: Strings are equal.\n");
    } else {
        printf("Test Case 1: Strings are different.\n");
    }

    // Test Case 2: Duplicate an empty string
    const char *empty = "";
    char *empty_dup1 = strdup(empty);
    char *empty_dup2 = ft_strdup(empty);

    if (empty_dup1 == NULL || empty_dup2 == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Compare the duplicated empty strings
    if (strcmp(empty_dup1, empty_dup2) == 0) {
        printf("Test Case 2: Empty strings are equal.\n");
    } else {
        printf("Test Case 2: Empty strings are different.\n");
    }

    // Test Case 3: Duplicate a NULL string (should return NULL)
    const char *null_str = NULL;
    char *null_dup1 = strdup(null_str);
    char *null_dup2 = ft_strdup(null_str);

    if (null_dup1 == NULL && null_dup2 == NULL) {
        printf("Test Case 3: Duplicating a NULL string succeeded.\n");
    } else {
        printf("Test Case 3: Duplicating a NULL string failed.\n");
    }

    // Don't forget to free the allocated memory
    free(dup1);
    free(dup2);
    free(empty_dup1);
    free(empty_dup2);

    return 0;
}
*/