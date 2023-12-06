#include <stdio.h>
#include <string.h>

int main() {
    // Test cases
    char str1[] = "Hello, World!";
    char str2[] = "Testing";
    char str3[] = "12345";
    char str4[] = "";

    // Test 1: Find 'W' in the string
    printf("Test 1:\n");
    int character1 = 'W';
    size_t size1 = sizeof(str1);
    void *result1 = ft_memchr(str1, character1, size1);
    void *expected1 = memchr(str1, character1, size1);
    printf("ft_memchr result: %p\n", result1);
    printf("Comparison: %s\n", result1 == expected1 ? "PASSED" : "FAILED");

    // Test 2: Find 't' in the string
    printf("Test 2:\n");
    int character2 = 't';
    size_t size2 = sizeof(str2);
    void *result2 = ft_memchr(str2, character2, size2);
    void *expected2 = memchr(str2, character2, size2);
    printf("ft_memchr result: %p\n", result2);
    printf("Comparison: %s\n", result2 == expected2 ? "PASSED" : "FAILED");

    // Test 3: Find '5' in the string
    printf("Test 3:\n");
    int character3 = '5';
    size_t size3 = sizeof(str3);
    void *result3 = ft_memchr(str3, character3, size3);
    void *expected3 = memchr(str3, character3, size3);
    printf("ft_memchr result: %p\n", result3);
    printf("Comparison: %s\n", result3 == expected3 ? "PASSED" : "FAILED");

    // Test 4: Find '\0' in an empty string
    printf("Test 4:\n");
    int character4 = '\0';
    size_t size4 = sizeof(str4);
    void *result4 = ft_memchr(str4, character4, size4);
    void *expected4 = memchr(str4, character4, size4);
    printf("ft_memchr result: %p\n", result4);
    printf("Comparison: %s\n", result4 == expected4 ? "PASSED" : "FAILED");

    return 0;
}