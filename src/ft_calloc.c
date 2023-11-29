/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ykarimi <marvin@42.fr>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/19 16:08:41 by ykarimi       #+#    #+#                 */
/*   Updated: 2023/11/03 19:52:13 by ykarimi       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Implementation of calloc() - Memory allocation
** #include <stdlib.h>
** The allocated memory is aligned such that it can be used for any data type,
** including AltiVec- and SSE-related types.
** The calloc() function contiguously allocates enough space for count objects
** that are size bytes of memory each and returns a pointer to the allocated 
** memory.  The allocated memory is filled with bytes of value zero.
** return a pointer to allocated memory.  If there is an error, they return
** a NULL pointer and set errno to ENOMEM
*/
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;
	size_t	max_size;

	mem = NULL;
	max_size = (size_t) - 1;
	if (count == 0 || size == 0)
		return (malloc(0));
	if (max_size / size < count)
		return (NULL);
	mem = malloc(count * size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, count * size);
	return (mem);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    // Test Case 1: Allocate and initialize an array of integers
    int *arr1, *arr2;
    size_t num_elements = 5;
    size_t element_size = sizeof(int);

    arr1 = (int *)calloc(num_elements, element_size);
    arr2 = (int *)ft_calloc(num_elements, element_size);

    if (arr1 == NULL || arr2 == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Fill both arrays with the same value
    for (size_t i = 0; i < num_elements; i++) {
        arr1[i] = 42;
        arr2[i] = 42;
    }

    // Compare the memory content
    if (memcmp(arr1, arr2, num_elements * element_size) == 0) {
        printf("Test Case 1: Arrays are equal.\n");
    } else {
        printf("Test Case 1: Arrays are different.\n");
    }

    // Test Case 2: Allocate and initialize an array of characters
    char *str1, *str2;
    size_t str_len = 10;

    str1 = (char *)calloc(str_len, sizeof(char));
    str2 = (char *)ft_calloc(str_len, sizeof(char));

    if (str1 == NULL || str2 == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Fill both strings with the same character
    for (size_t i = 0; i < str_len; i++) {
        str1[i] = 'A';
        str2[i] = 'A';
    }

    // Compare the memory content
    if (strcmp(str1, str2) == 0) {
        printf("Test Case 2: Strings are equal.\n");
    } else {
        printf("Test Case 2: Strings are different.\n");
    }

    // Edge Case: Allocate 0 bytes (should return a valid pointer)
    void *edge1 = calloc(0, 10);
    void *edge2 = ft_calloc(0, 10);

    if (edge1 != NULL && edge2 != NULL) {
        printf("Edge Case: Allocation of 0 bytes succeeded.\n");
    } else {
        printf("Edge Case: Allocation of 0 bytes failed.\n");
    }

    // Don't forget to free the allocated memory
    free(arr1);
    free(arr2);
    free(str1);
    free(str2);
    free(edge1);
    free(edge2);

    return 0;
}
*/
