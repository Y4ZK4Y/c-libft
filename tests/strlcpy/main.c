#include "../../include/libft.h"
#include <stdio.h>
#include <string.h>

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