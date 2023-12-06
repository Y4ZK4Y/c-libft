#include <stdio.h>
#include <string.h>

int main() {
    // Test case 1: Overlapping move (dst > src)
    char str1[] = "Hello, World!";
    printf("Original string: %s\n", str1);
    ft_memmove(str1 + 7, str1, 5);
    printf("ft_memmove result: %s\n", str1);

    char str2[] = "Hello, World!";
    memmove(str2 + 7, str2, 5);
    printf("memmove result: %s\n", str2);
    printf("\n");

    // Test case 2: Overlapping move (dst < src)
    char str3[] = "Hello, World!";
    printf("Original string: %s\n", str3);
    ft_memmove(str3, str3 + 7, 5);
    printf("ft_memmove result: %s\n", str3);

    char str4[] = "Hello, World!";
    memmove(str4, str4 + 7, 5);
    printf("memmove result: %s\n", str4);
    printf("\n");

    // Test case 3: Non-overlapping move
    char str5[] = "Hello, World!";
    printf("Original string: %s\n", str5);
    ft_memmove(str5 + 7, str5, 3);
    printf("ft_memmove result: %s\n", str5);

    char str6[] = "Hello, World!";
    memmove(str6 + 7, str6, 3);
    printf("memmove result: %s\n", str6);
    printf("\n");

    // Test case 4: Move to the same location (no effect)
    char str7[] = "Hello, World!";
    printf("Original string: %s\n", str7);
    ft_memmove(str7 + 7, str7 + 7, 5);
    printf("ft_memmove result: %s\n", str7);

    char str8[] = "Hello, World!";
    memmove(str8 + 7, str8 + 7, 5);
    printf("memmove result: %s\n", str8);

    return 0;
}