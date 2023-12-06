#include "../../include/libft.h"
#include <stdio.h>
#include <string.h>

int main() {
    // Test cases
    const unsigned char test1[] = "Hello";
    const unsigned char test2[] = "Hello";
    const unsigned char test3[] = "Helloworld";
    const unsigned char test4[] = "Hell";
    const unsigned char test5[] = "Helli";

    // Testing custom ft_memcmp
    printf("ft_memcmp Results:\n");
    printf("Test 1: %d\n", ft_memcmp(test1, test2, 5));
    printf("Test 2: %d\n", ft_memcmp(test1, test3, 5));
    printf("Test 3: %d\n", ft_memcmp(test1, test4, 4));
    printf("Test 4: %d\n", ft_memcmp(test4, test5, 4));

    // Testing standard memcmp
    printf("\nStandard memcmp Results:\n");
    printf("Test 1: %d\n", memcmp(test1, test2, 5));
    printf("Test 2: %d\n", memcmp(test1, test3, 5));
    printf("Test 3: %d\n", memcmp(test1, test4, 4));
    printf("Test 4: %d\n", memcmp(test4, test5, 4));

    return 0;
}