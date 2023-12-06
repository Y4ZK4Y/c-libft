#include "../../include/libft.h"
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

    // free the allocated memory
    free(dup1);
    free(dup2);
    free(empty_dup1);
    free(empty_dup2);

    return 0;
}