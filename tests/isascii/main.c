#include "../../include/libft.h"
#include <stdio.h>
#include <ctype.h>
int main() {
    const char *test_string = "Hello World!";
    printf("Original String: %s\n", test_string);

    printf("Using standard isascii:\n");
    for (int i = 0; test_string[i] != '\0'; i++) {
        if (isascii(test_string[i])) {
            putchar('1');
        } else {
            putchar('0');
        }
    }
    putchar('\n');

    printf("Using ft_isascii:\n");
    for (int i = 0; test_string[i] != '\0'; i++) {
        if (ft_isascii(test_string[i])) {
            putchar('1');
        } else {
            putchar('0');
        }
    }
    putchar('\n');

    return 0;
}