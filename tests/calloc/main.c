#include "../../include/libft.h"
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

    // free the allocated memory
    free(arr1);
    free(arr2);
    free(str1);
    free(str2);
    free(edge1);
    free(edge2);

    return 0;
}