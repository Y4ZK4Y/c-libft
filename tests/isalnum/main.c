#include "../../include/libft.h"
#include <stdio.h>
#include <ctype.h>

int main() {
    const char *test_string = "Hello123 World! 456";
    printf("Original String: %s\n", test_string);

    printf("Using standard isalnum:\n");
    for (int i = 0; test_string[i] != '\0'; i++) {
        if (isalnum(test_string[i])) {
            putchar('1');
        } else {
            putchar('0');
        }
    }
    putchar('\n');

    printf("Using ft_isalnum:\n");
    for (int i = 0; test_string[i] != '\0'; i++) {
        if (ft_isalnum(test_string[i])) {
            putchar('1');
        } else {
            putchar('0');
        }
    }
    putchar('\n');

    return 0;
}