#include "../../include/libft.h"
#include <stdio.h>
#include <string.h>

int main() {
    char str1[20];
    char str2[20];

    // Using standard memset to fill the first 10 bytes with 'A'
    memset(str1, 'A', 10);
    printf("Standard memset (partial): %s\n", str1);

    // Using ft_memset to fill the first 10 bytes with 'B'
    ft_memset(str2, 'B', 10);
    printf("ft_memset (partial): %s\n", str2);

    // Using standard memset to fill the entire array with 'C'
    memset(str1, 'C', sizeof(str1));
    printf("Standard memset (full): %s\n", str1);

    // Using ft_memset to fill the entire array with 'D'
    ft_memset(str2, 'D', sizeof(str2));
    printf("ft_memset (full): %s\n", str2);

    return 0;
}
