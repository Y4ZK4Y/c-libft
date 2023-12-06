#include "../../include/libft.h"
#include <stdio.h>
#include <string.h>

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